#include <stdio.h>
#include "MDcounter.h"
int main(){

		MD_COUNTER_t c1;
		init_counter(&c1,16,4,16,0);
		print_counter(&c1,16,4,16,0);
	return 0;
}
