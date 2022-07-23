/*
 ============================================================================
 Name        : Modulo N counter
 Author      :
 Version     :
 Description :
 ============================================================================
 */
#include <stdio.h>
#include "counter.h"
int main(){
	COUNTER_t c1;
	init_counter(&c1,34);
	print_counter(&c1,34);
	return 0;
}
