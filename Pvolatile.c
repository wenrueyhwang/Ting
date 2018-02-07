/*****************************************
 *		Pvolatile.c  by GUN 	 *
 * 	Program shows how to use volatile*
 *	to understand the usage		 *
 *	volatile.				 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	const int local = 10;
	int *ptr = (int*) &local;

	printf("Initial value of local %d\n", local);

	*ptr = 100;

	printf("Modified value of local %d\n", local);
}

