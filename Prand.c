/*****************************************
 *		Prand.c by GUN 	 	 *
 * 	The program describes stdlib 	 *
 *	for number transform  	  	 *
 * 	int srand(void) and rand(void)	 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int n,i;
	time_t t;

	n = 15;

/****   initializes random number generator ****/
	srand((unsigned) time(&	t));

	for(i=0; i<n; i++)
		printf("%d ", rand() % 50); /* between 0 to 50 */
	printf("\n");
}
 
