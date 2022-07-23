/*
 ============================================================================
 Name        : Template
 Author      :
 Version     :
 Description :
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int * mem = 0;
unsigned int bytes = 0;

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	print_100_allocs(); // allocate 1024 bytes of memory each time to an address in memory
	//print_inf_allocs(); // allocate 1024 bytes of memory each time to an a
	return 0;
}
void print_100_allocs()
{
	for (int i = 0; i<=100; i++)
		{
			mem = malloc(bytes);
			bytes = bytes + 1024;
			printf("Allocated %d bytes at %x\n", bytes, &mem);
		}
	free(mem);
}
void print_inf_allocs()
{
	while(1) // DANGER
		{
			mem = malloc(bytes);
			bytes = bytes + 1024;
			printf("Allocated %d bytes at %x\n", bytes, &mem);
		}
	free(mem);
}
