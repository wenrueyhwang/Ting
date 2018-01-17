/*****************************************
 *		P7_4.c by GUN	 	 *
 * 	The program impements		 *
 *	Multiply two matrices		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#define MAX 10
float a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];

void main()
{
	int i, j, k, x, y, p, q;

	do {
		printf("Please input the dimension of Matrices:\n");
		printf("The [A] row-column numbers are: ");
		scanf("%d %d",&x, &y );
		printf("The [B] row-column numbers are: ");
		scanf("%d %d", &p, &q);
		if(y != p) printf("!!!!! The [A] and [B] can't be multiplied...try again!\n");
	} while(y != p);
	printf("Please input the Matrix [A] data:\n");
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			printf("the a[%d][%d] = ", i+1, j+1);
			scanf("%f",&a[i][j]);
		}
	printf("*************************************************\n");
	printf("Please input the Matrix [B] data:\n");
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
		{
			printf("the b[%d][%d] = ", i+1, j+1);
			scanf("%f", &b[i][j]);
		}
/* start to implement the matrices multiplication, */
	for(i=0;i<x;i++)
		for(j=0;j<q;j++)
			for(k=0; k < y; k++) 
			c[i][j] = c[i][j]+a[i][k] * b[k][j];
	printf("***** The result [C] is: *****\n");
	for(i=0;i<x;i++)
	{
		printf("   |  ");
		for(j=0;j<q;j++) printf("%6.1f  ", c[i][j]);
		printf("\n");
	}
}
 			
