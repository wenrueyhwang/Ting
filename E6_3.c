/*****************************************
 *		E6_3.c by GUN	 	 *
 * 	This exercise shows		 *
 *	(for loop) statement		 *
 *	to create a triangle shape  	 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include "ansi.h"

int main()
{
	int n, i, k ;
	ED;
	for(n=20;n>0;n -= 2)
	{
		k = (20 - n)/2;
		CUP(1+k,25+k);
		printf("%2d ", n);
		for(i=1;i<=n;i++)
		{
			printf("*");
		}
		printf("\n");
	}
}

	


