/*****************************************
 *		P15-1.c  by GUN 	 *
 * 	Advanced control program	 *
 * 	using recursive function 	 *
 *	to calculate factorial(n)	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double factorial(int);

int main()
{
	printf("30! = %.50e\n", factorial(30));
}

double factorial(int n)
{
	if(n <=1)
	{
		printf("factorial(%d)\n", n);
		return(1);
	}
	else  printf("factorial(%d)\n", n);
	return(n*factorial(n-1));
}

