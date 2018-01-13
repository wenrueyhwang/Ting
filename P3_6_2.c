/*****************************************
 *		P3_6_2.c by GNUC	 *
 * 	The program discusses the usage  *
 *	of the conversion specification  *
 *	of printf function.              *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	float l = 123.45;
	static char array[] = "This is C language.";
	printf("the string is s-type = %10s\n", array);
	printf("the string is s-type = %25s\n", array);
	printf("the string is s-type = %-25s\n", array);
	printf("the string is s-type = %25.10s\n", array);
	printf("the number is f-type = %f\n", l);
	printf("the number is g-type = %g\n", l);
	printf("the number is e-type = %e\n", l);
	printf("the number is f-type = %-20f\n", l);
	printf("the number is g-type = %-20g\n", l);
	printf("the number is e-type = %-20e\n", l);
	printf("the number is f-type = %-20.4f\n", l);
	printf("the number is g-type = %-20.4g\n", l);
	printf("the number is e-type = %-20.4e\n", l);
	
}

