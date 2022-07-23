/*
 * counter.c
 *
 *  Created on: 9 Sep 2021
 *      Author: Mateo C. Querol
 */
#include <stdio.h>
#include "counter.h"

void init_counter(COUNTER_t *const ct, unsigned int maxVal) {
	ct->maxVal = maxVal;
	ct->currentVal = 0;
}
void print_counter(COUNTER_t *const ct, unsigned int maxVal) {
	printf("Modulo %d Counter\n", ct->maxVal);
	ct->currentVal = 0;
	for (int i = 0; i<maxVal; i++)
	{
		printf("%d\n", ct->currentVal);
		if(i > ct->maxVal) // if overflow currentVal = 0
		{
			ct->currentVal = 0;
		}
		ct->currentVal = ct->currentVal + 1;
	}
}
