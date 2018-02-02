/*****************************************
 *		Pstdarg.c by GUN 	 *
 * 	The program describes stdarg.h 	 *
 *	variable arguemt of funtion	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

double average(int,... );

int main()
{
	printf("average of 3.0, 4.0, 5.0 = %.3f\n", average(3, 3.0, 4.0, 5.0));
	printf("avreage of 5.0, 10.0, 15.0 = %.3f\n", average(3, 5.0, 10.0, 15.0));
}
double average(int num,...) /* first is a number of parameters */
{
	va_list  valist; /* define valist is a va_list type */
	double sum = 0.0;
	double a[num];
	int i;

	/* initialize valist for num number of argument */
	va_start(valist, num);
	/* access all the arguments assigned to valist */
	for(i = 0; i<num; i++)
	{
		a[i] = va_arg(valist, double);
		sum += a[i];
	}
	for(i=0; i<num; i++) printf("%.3f\n", a[i]);
	va_end(valist);
	return sum/num;
}
