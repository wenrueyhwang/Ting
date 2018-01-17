/*****************************************
 *		P4_5main.c by GUN 	 *
 * 	The program shows array  	 *
 * 	as an argument of function	 *
 *			                 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

char co_index[4][15] = 
{
	"IBM Inc",
	"General Motors",
	"Shell Oil",
	"Delta"
};
void display(int index, char co_index[4][15]);

int main()
{
	int index;

	for(index=1; index >=1 && index <=4; index++)
		display(index, co_index);
}


