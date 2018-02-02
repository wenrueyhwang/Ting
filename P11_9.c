/*****************************************
 *		P11_9.c  by GUN 	 *
 * 	The program describes ctype.h 	 *
 *	character MACROS		 *
 *	atol() and atof() 	  	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>


int main()
{
	char *s;
	double x;
	long l;
	int i;

	s = "-1234.56e-15";
	x = atof(s);
	printf("the ATOF(%s) = %e \n", s, x);

	s = "123456";
	i = atoi(s);
	printf("the ATOI(%s) = %d\n", s, i);

	s = "91154 dollars";
	l = atol(s);
	printf("the ATOL(%s) = %ld\n", s, l);
}
