/*
 * MDcounter.c
 *
 *  Created on: 9 Sep 2021
 *      Author: Mateo C. Querol
 */

#include "MDcounter.h"
#include <stdio.h>

void init_counter(MD_COUNTER_t *const ct, unsigned int maxVal, unsigned int noDigits, unsigned int base, unsigned int currentVal)
{
	ct->maxVal = maxVal;
	ct->currentVal = currentVal;
	ct->noDigits = noDigits;
	ct->base = base;

}
void print_counter(MD_COUNTER_t *const ct, unsigned int maxVal, unsigned int noDigits, unsigned int base, unsigned int currentVal)
{
	//printf("Modulo %d Counter\n", ct->maxVal);
	ct->currentVal = 0;
	for (int i = 0; i<=maxVal; i++)
	{
		for (int j = 0; j<=noDigits; j++)
		{
				if (ct->base == 2)
				{
					//printf("%b",ct->currentVal);
				}
				else if (ct->base == 8)
				{
					printf("%o",ct->currentVal);
				}
				else if (ct->base == 10)
				{
					printf("%d",ct->currentVal);
				}
				else if (ct->base == 16)
				{
					printf("%x",ct->currentVal);
				}

				if(i > ct->maxVal) // if overflow currentVal = 0
				{
					ct->currentVal = 0;
				}
				ct->currentVal = ct->currentVal + 1;
		}
		printf("base is %d", ct->base);
		printf(" ");
	}
}
