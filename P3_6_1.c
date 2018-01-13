/*****************************************
 *		P3_6_1.c		 *
 * 	The program discusses the usage  *
 *	of the conversion specification  *
 *	of printf function.              *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	int i = 122;
	printf("the number is d-type = %d\n", i);
	printf("the number is d-type = %10d\n", i);
	printf("the number is d-type = %-10d\n", i);
	printf("the number is o-type = %o\n", i);
	printf("the number is o-type = %10o\n", i);
	printf("the number is o-type = %-10o\n", i);
	printf("the number is x-type = %x\n", i);
	printf("the number is x-type = %10x\n", i);
	printf("the number is x-type = %-10x\n", i);
	printf("the number is c-type = %c\n", i);
	printf("the number is c-type = %10c\n", i);
	printf("the number is c-type = %-10c\n", i);
	
}

