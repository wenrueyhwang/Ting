/*****************************************
 *		P11_14.c  by GUN 	 *
 * 	The program describes math.h 	 *
 *	Mathematic library functions:	 *
 * 	triangular functions:		 *
 * cos, sin,tan, asin, acos, atan, atan2 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
{

	double y = 0.5;
	double dvalue;

	dvalue = sin(PI);
	printf("the sin(%.5f) = %.2f\n", PI, dvalue);

	dvalue = cos(PI);
	printf("the cos(%.5f) = %.2f\n", PI, dvalue);

	dvalue = tan(PI/4.0);
	printf("the tan(%.5f) = %.2f\n", PI/4.0, dvalue);

	dvalue = asin(y);
	printf("the asin(%.1f) = %.5f\n", y, dvalue);

	dvalue = acos(y);
	printf("the acos(%.1f) = %.5f\n", y, dvalue);

	dvalue = atan(y);
	printf("the atan%.1f) = %.5f\n", y, dvalue);

	dvalue = atan2(PI, y);
	printf("the atan2(%.1f) = %.5f\n", y, dvalue);

}
