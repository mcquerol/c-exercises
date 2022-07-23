/*
 * MDcounter.h
 *
 *  Created on: 9 Sep 2021
 *      Author: Mateo C. Querol
 */

#ifndef MDCOUNTER_H_
#define MDCOUNTER_H_

typedef struct
{
	unsigned int noDigits; //number of digits per number
	unsigned int base; // base 2 8 10 or 16
	unsigned int currentVal; //current value of counter
	unsigned int maxVal; // maximum value of counter
	unsigned int number[]; // array to store the n digit number

}MD_COUNTER_t;

void init_counter(MD_COUNTER_t *const ct, unsigned int maxVal, unsigned int noDigits, unsigned int base, unsigned int currentVal);
void print_counter(MD_COUNTER_t *const ct, unsigned int maxVal, unsigned int noDigits, unsigned int base, unsigned int currentVal);

#endif /* MDCOUNTER_H_ */
