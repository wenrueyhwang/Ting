/*****************************************
 *		P7_1.c by GUN	 	 *
 * 	The program shows		 *
 *	to exercise array and struct	 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#define MAX 5
struct RECODE
{
	long number;
	float chinese;
	float math;
	float program;
};
int main()
{
	
	int i, ch;

	struct RECODE student[MAX];
	printf("Please input the RECODE data.\n");
	for(i=0; i< MAX; i++)

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

	


