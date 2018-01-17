/*****************************************
 *		P6_8.c by GUN	 	 *
 * 	The program shows		 *
 *	(for loop) statement		 *
 *	Establishes a 9 * 9 table  	 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	int i, j, k;

	printf("\n\t\t  The 9 * 9 multiplication table is :\n\n");
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			k = i * j;
			printf("%d*%d=%2d ", i, j, k);
		}
		printf("\n");
	}
}

	


