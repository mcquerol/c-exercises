/*
 * DynIntArray.h
 *
 *  Created on: 01.09.2012
 *      Author: wirth
 */

#ifndef DYNINTARRAY_H_
#define DYNINTARRAY_H_

// manage arrays of integers
struct dynIntArray
{
	int* elem;
	unsigned int filled;
	unsigned int size;
	unsigned int growth;
	int sorted;
};
typedef struct dynIntArray dynIntArray_t;

void init_array(dynIntArray_t* arr, unsigned int size, unsigned int growth);
int put_val(dynIntArray_t* arr, int val);
void print_array(dynIntArray_t* arr);
void sort_array(dynIntArray_t* arr);
void free_array(dynIntArray_t* arr);

#endif /* DYNINTARRAY_H_ */
