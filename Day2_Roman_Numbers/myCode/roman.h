/*
 * roman.h
 *
 *  Created on: 11 Sep 2021
 *      Author: Mateo C. Querol
 */

#ifndef ROMAN_H_
#define ROMAN_H_

#define LENGTH	20 // input buffer length

typedef enum  {
	I = 1,
	V = 5,
	X = 10,
	L = 50,
	C = 100,
	D = 500,
	M = 1000,
} NUMS_t;

NUMS_t input[LENGTH];

int printROMAN(NUMS_t n);


#endif /* ROMAN_H_ */
