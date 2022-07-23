#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	int x,y;
	printf("Please enter the size (x,y) of the game: \n");
	scanf("%d %d",&x,&y);
	unsigned int * mem =0;
	char board[x][y];
	mem = malloc(x*y);
	printboard(x,y,mem);

	return 0;
}
void clearboard(char x, char y, char c, unsigned int * mem)
{

}
void printboard(char x, char y, unsigned int * mem)
{
	printf("Allocated the board of dimension x = %d, y = %d at address %x\n",x,y,&mem);
	for(int a = 0; a<=x;a++)
	{
		for (int b = 0; b<=y;b++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void setboard(char x, char y, char c, unsigned int * mem)
{
	int row = slot / 3;
	    int col;

	    if(slot % 3 == 0) {
	        row = row - 1;
	        col = 2;
	    }
	    else {
	        col = slot % 3 - 1;
	    }
}

