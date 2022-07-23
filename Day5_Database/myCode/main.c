/*
 * main.c
 *
 *  Created on: 01.09.2012
 *      Author: wirth
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "DynIntArray.h"

int main(void)
{
	dynIntArray_t a1;
	init_array(&a1, 10, 5);

	// test dynamic array
	// fill array with random numbers
	int i;
	time_t t;
	time(&t);
	srand((unsigned int)t);              /* initialize random number generator */

	for ( i=0; i<21; i++ )
	{
	  if(put_val(&a1,rand())==0)
	  {
		  printf("Could not put all numbers into array!\n");
		  break;
	  }
	}
	// print result
	print_array(&a1);
	// sort array
	sort_array(&a1);
	print_array(&a1);
	free_array(&a1);

	////////////////////////////////////////////////////
	// simulate playing dice
	// print a histogram of the random number sequence
	unsigned int Nexp=20;	// number of dice experiments
	dynIntArray_t diceseq;
	init_array(&diceseq, Nexp, 1);
	for(i=0; i<Nexp;i++)
		put_val(&diceseq,(rand()%6+1));
	print_array(&diceseq);

	if(diceseq.filled > 0)
	{
		// create a histogram with 6 bins
		dynIntArray_t hist;
		init_array(&hist, 6, 1);
		// sort the dice sequence
		sort_array(&diceseq);
		// count the absolute frequency of the values in the sequence
		int absfrq, dval=1, dpos=0;
		while(dval<=6)
		{
			absfrq=0;
			while(diceseq.elem[dpos]==dval)
			{
				absfrq++;dpos++;
			}
			put_val(&hist,absfrq);
			dval++;
		}
		print_array(&hist);

		printf("\nrelative frequency of the values in the dice sequence: \n");
		for(i=0; i<hist.filled; i++)
		{
			printf("%8.6f ", (double)hist.elem[i]/Nexp);
		}
		printf("\n");
		free_array(&hist);
	}
	free_array(&diceseq);
	return 0;
}
