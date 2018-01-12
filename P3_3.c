/*****************************************
 * 	The program discusses the usage  *
 *	of constant symbols and variables*
 *	( for Hexdecimal - constant )    *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

#define LOWER 0x0
#define UPPER 0x64
#define STEP 0x0a

int main()
{
	int fahr;
	for(fahr = LOWER; fahr <= UPPER; fahr+=STEP)
	{
		printf("the fahr = %4d --->", fahr);
		printf("the cels = %6.1f\n", (5.0/9.0)*(fahr-32));
	}
}

