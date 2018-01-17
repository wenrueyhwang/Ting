/*****************************************
 *		P6_7.c by GUN	 	 *
 * 	The program shows		 *
 *	(do --- while) statement	 *
 *	computes the e value     	 *
 *	e = 2.7182818...		 *
 *	e = 1+1/1!+1/2!+1/3!+1/4!+....	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	int n = 1;
	double e=1.0, term=1.0;

	printf("No of term\t value of last term\t");
	printf("Approximation of E\n");
	do
	{
		e += term;
		printf("\t %d \t %12.9f \t %15.9f\n" \
			, n, term, e);
		n++;
		term /= n;
	} while(term >= 1.0e-9);
}

	


