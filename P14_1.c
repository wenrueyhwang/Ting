/*****************************************
 *		P14_1.c  by GUN 	 *
 * 	The program describes 	 	 *
 *	typedef usage	 		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>

typedef float REAL;
typedef struct{
	int ch;
	REAL number;
	} IDENTRY;
REAL x;
static IDENTRY key;

int main()
{
	x = 50.55;
	key.ch = 100;
	key.number = 3.14159;

	printf("the x = %.2f sizeof(float) is %d\n", x, sizeof(REAL));
	printf("the key sizeof(int + REAL) is %d\n", sizeof(IDENTRY));
	printf("the key.ch  = %d \n", key.ch);
	printf("the key.number = %.5f\n", key.number);
}

