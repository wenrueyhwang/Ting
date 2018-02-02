/*****************************************
 *		factorial.c by GUN 	 *
 * 	The program describes 	 	 *
 *	recursive function		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int factor(unsigned int );

int main()
{
	unsigned int n = 12;
	printf("Factorial !(%u) = %d\n", n, factor(n));
}
int factor(unsigned int n)
{
	if(n <=1 ) return(1);
	printf("%u\n", n);
	return(n*factor(n-1));
}
