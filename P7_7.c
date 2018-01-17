/*****************************************
 *		P7_7.c by GUN	 	 *
 * 	The program impements		 *
 *	prime-print out all the		 *
 *	primes less than 1000.		 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#define MAX	1000
#define MIN	2

void main()
{
	int i, j, k;
	k = 0;
	printf("All the primes of 1000 are: \n");
	for(i=MIN; i < MAX; i++)
	{
		j = MIN;
		while(i%j != 0) j++; //to increase j to reach i
		if(j == i)
		{
			printf("%3d   ", i);
			if(++k == 10)
			{
				printf("\n");
				k = 0;
			}
		}
	}
	printf("\n");
}

 			
