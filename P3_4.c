/*****************************************
 * 	The program discusses the usage  *
 *	of constant symbols and variables*
 *	( for float-point - constant )   *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

#define LOWER 0.0
#define UPPER 100.0
#define STEP 10.0

int main()
{
	float fahr;
	printf("\n\tThe table of fahr and cels\n\n");
	for(fahr = LOWER; fahr <= UPPER; fahr+=STEP)
	{
		printf("the fahr = %5.1f --->", fahr);
		printf("the cels = %6.1f\n", (5.0/9.0)*(fahr-32));
	}
}

