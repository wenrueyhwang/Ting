/*****************************************
 *		P6_1.c by GUN	 	 *
 * 	The program explains: break  	 *
 * 	and continue functions  	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	float sum = 0.0;
	int i;
	printf("from 1 to 100, the sum ");
	printf(" of all 13 multiples :\n");
	for(i = 1; i<= 100; i++)
	{
		if(i%13 != 0) continue;
		if(i==52) break;
		printf("\t%d", i);
		if(i==39) printf("\n");
		sum += i;
	}
	printf("\n");
	printf("** THE ANSWER IS %6.1f **\n", sum);
}



