/*****************************************
 *		P11_8.c  by GUN 	 *
 * 	The program describes ctype.h 	 *
 *	character MACROS		 *
 *	atoi() converts ascii to int  	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
	int fact, n;
	char *cp ;

	if(argc != 2)
	{
		printf("Syntax error: this needs two arguments.\n");
		exit(-1);
	}
	/* to check all argv[1] are digital value */
	for(cp = argv[1]; *cp != '\0'; cp++)
		if(!isdigit(*cp))
		{
			printf("Usage : FACT integer\n");
			exit(-1);
		}
	n = atoi(argv[1]); /* ascii converts to integer */

	for(fact = n; n>2; fact *= --n); /* to calculate factorial  n! */
	printf("%s factorial = %d\n", argv[1], fact);
}
