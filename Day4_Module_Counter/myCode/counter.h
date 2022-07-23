/*
 * counter.h
 *
 *  Created on: 9 Sep 2021
 *      Author: Mateo C. Querol
 */

#ifndef COUNTER_H_
#define COUNTER_H_

typedef struct
{
	unsigned int maxVal; //max value of counter
	unsigned int currentVal; //current value of counter
} COUNTER_t;

void init_counter(COUNTER_t *const ct, unsigned int maxVal);
void print_counter(COUNTER_t *const ct, unsigned int maxVal);

#endif /* COUNTER_H_ */
