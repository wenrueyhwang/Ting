/*****************************************
 * 	The program discusses the usage  *
 *	of constant symbols and variables*
 *	( for decimal - constant )       *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

#define LOWER 0
#define UPPER 100
#define STEP 10

int main()
{
	int fahr;
	for(fahr = LOWER; fahr <= UPPER; fahr+=STEP)
	{
		printf("the fahr = %4d --->", fahr);
		printf("the cels = %6.1f\n", (5.0/9.0)*(fahr-32));
	}
}

