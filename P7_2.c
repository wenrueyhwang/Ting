/*****************************************
 *		P7_2.c by GUN	 	 *
 * 	The program impements		 *
 *	using array to add		 *
 *	multi-items coefficient.	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

#define MAX 5

void main()
{
	int x[MAX+1], y[MAX+1], z[MAX+1];// array is from 0 to MAX
	int i;


	printf("Please input the coefficients:\n");
	printf(" The first is :\n");
	for(i=MAX; i>=0; i--)
	{
		printf("X[%d]=",i);
		scanf("%d", &x[i]);
	}
	// for(i=MAX; i>=0; i--) printf("X[%d]=%d", i, x[i]);
	printf(" The second is :\n");
	for(i=MAX; i>=0; i--)
	{
		printf("Y[%d]=", i);
		scanf("%d", &y[i]);
	}
	// for(i=MAX; i>=0; i--) printf("Y[%d]=%d", i, y[i]);
	printf(" The result is :\n");
	for(i=MAX; i>=0; i--)
		z[i] = x[i] + y[i];
	for(i=MAX; i>=0; i--)	 
		printf("Z[%d]=%d  ", i, z[i]);
	printf("\n");
}
