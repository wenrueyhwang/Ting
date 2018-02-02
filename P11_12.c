/*****************************************
 *		P11_12.c  by GUN 	 *
 * 	The program describes math.h 	 *
 *	Mathematic library functions:	 *
 * ceil(), floor(), exp(), fabs(), fmod()*
 * log(), log10(), pow(), sqrt(),...	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <math.h>

int main()
{

	double x = 2.5, y = 2.0;
	double dvalue;

	printf("the ceil(%.1f) = %.2f\n", x, ceil(x));

	dvalue = exp(x);
	printf("the exp(%.1f) = %.2f\n", x, dvalue);

	dvalue = fabs(-x);
	printf("the fabs(%.1f) = %.2f\n", -x, dvalue);

	dvalue = floor(x);
	printf("the floor(%.1f) = %.2f\n", x, dvalue);

	dvalue = fmod(x, y);
	printf("the fmod(%.1f, %.1f) = %.2f\n", x, y, dvalue);

	dvalue = log(x);
	printf("the log(%.1f) = %.2f\n", x, dvalue);

	dvalue = log10(x);
	printf("the log10(%.1f) = %.2f\n", x, dvalue);

	dvalue = pow(x, y);
	printf("the pow(%.1f, %.1f) = %.2f\n", x, y, dvalue);

	dvalue = sqrt(x);
	printf("the sqrt(%.1f) = %.2f\n", x, dvalue);

}
