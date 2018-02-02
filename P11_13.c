/*****************************************
 *		P11_13.c  by GUN 	 *
 * 	The program describes stdlib.h 	 *
 *	random number functions:	 *
 * 	srand() and rand()		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <math.h>
#include <time.h>


int main()
{
	int i;
	clock_t ck;

	ck = clock();
	srand(ck);
	for(i=0; i<10; i++)
	printf("the random(%d) = %d\n",i, rand()%10);
}
