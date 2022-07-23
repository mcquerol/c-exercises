/*
 ============================================================================
 Name        : Roman numerals calculator
 Author      : Mateo Ceballos Querol
 Version     :
 Description :
 ============================================================================
 */
#include <stdio.h>
#include <string.h>
#include "roman.h"

int main()
{
	int result = 0; // store the sum
	//NUMS_t input[LENGTH] = {I,V}; //example input: 4 (not working)
	NUMS_t input[LENGTH] = {L,C,M}; // example input: 1150 (working)

	for (int i = 0; i<=3; i++)
	{

		//if (printROMAN(input[i]) < printROMAN(input[i+1])) //if IV or IX etc
		//{
		//	result = result - (printROMAN(input[i+1]) - printROMAN(input[i]));
		//}
		//else
		//{
			result = result + printROMAN(input[i]);
		//}

	}
	printf("%d",result);

	//TODO :
	/*
	 * input validation
	 */
	return 0;
}

