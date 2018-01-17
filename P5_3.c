/*****************************************
 *		P5_3.c by GUN	 	 *
 * 	The program explains: MACRO  	 *
 * 	to swap(x,y) 			 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

#define swap(x,y) {float z; z = x; x = y; y = z;}

int main()
{
	float x, y;

	printf("Please input two float numbers : ");
	scanf("%f %f", &x,  &y);
	printf("Before swap(x,y), the numbers are: ");
	printf("x = %6.1f and y = %6.1f\n", x, y);
	swap(x,y);
	printf("After swap(x, y), the numbers are: ");
	printf("x = %6.1f and y = %6.1f\n", x, y);
}


