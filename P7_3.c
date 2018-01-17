/*****************************************
 *		P7_3.c by GUN	 	 *
 * 	The program impements		 *
 *	Linear combination of matrix	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#define MAX 10

float a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];

void main()
{
	int n, i, j, x, y;

	printf("Please inpt the dimension of Matrix:");
	scanf("%d", &n);

	printf("Please input the Matrix A data:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("the a[%d][%d] = ", i+1, j+1);
			scanf("%f",&a[i][j]);
		}
	printf("Please input the Matrix B data:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("the b[%d][%d] = ", i+1, j+1);
			scanf("%f", &b[i][j]);
		}
	printf("The linear combination matrix:\n");
	printf("x * A + y * B =\n");
	printf("the x value = ");
	scanf("%d", &x);
	printf("the y value = ");
	scanf("%d", &y);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			c[i][j] = x*a[i][j] + y*b[i][j];
	printf("The (%d) * A + (%d) * B = C\n", x, y);
	printf("\t A \t\t B \t\t C \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++) printf("%4.1f ", a[i][j]);
		printf("| ");
		for(j=0;j<n;j++) printf("%4.1f ", b[i][j]);
		printf("| ");
		for(j=0;j<n;j++) printf("%4.1f ", c[i][j]);
		printf("\n");
	}
}
 			
