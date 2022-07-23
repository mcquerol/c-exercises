/*
 * DynIntArray.c
 *
 *  Created on: 01.09.2012
 *      Author: wirth
 */
#include <stdio.h>
#include <stdlib.h>
#include "DynIntArray.h"

void init_array(dynIntArray_t* arr, unsigned int size, unsigned int growth)
{
	if(size == 0)
	{
		arr->elem = NULL;
		if(growth == 0)
			arr->growth=1;
	}
	else
		arr->elem = malloc(size*sizeof(int));
	arr->size=size;
	arr->growth=growth;
	arr->filled=0;
	arr->sorted=0;
}

int put_val(dynIntArray_t* arr, int val)
{
	if(arr->filled >= arr->size)
	{
		if(arr->growth != 0)
		{
			arr->size= arr->size+arr->growth;
			arr->elem=realloc(arr->elem, arr->size*sizeof(int));
		}
		else
			return 0;
	}
	arr->elem[arr->filled]=val;
	arr->filled++;
	if(arr->sorted == 1)
	{
		arr->sorted=0;
		sort_array(arr);
	}
	return 1;
}

void print_array(dynIntArray_t* arr)
{
	printf("array@%#x: (%u/%u) +%u ", (unsigned int)arr, arr->filled, arr->size, arr->growth);
	if(arr->sorted == 1)printf("sorted");
	else printf("not sorted");
	unsigned int i=0;
	for(i=0; i < arr->filled;i++)
	{
		if(i%10 == 0)
			printf("\n");
		printf("%8d ", arr->elem[i]);
	}
	printf("\n");
}

void sort_array(dynIntArray_t* arr)
{
	if((arr->filled <= 1) || (arr->sorted == 1))
		return;
	int i,j, swap, swapped;
	for(j=arr->filled-1; j>0; j--)
	{
		swapped=0;
		for(i=0; i<j; i++)
		{
			if(arr->elem[i]>arr->elem[i+1])
			{
				swap=arr->elem[i];
				arr->elem[i]=arr->elem[i+1];
				arr->elem[i+1]=swap;
				swapped=1;
			}
		}
		if(swapped==0)
			break;
	}
	arr->sorted=1;
}

void free_array(dynIntArray_t* arr)
{
	if(arr->elem != NULL)
	{
		free(arr->elem);
		arr->elem = NULL;
	}
	arr->size=0;
	arr->growth=0;
	arr->filled=0;
	arr->sorted=0;
}


