/****************************************
 * 		Test1.c			*
 * 	This program tests C Marcos	*
 *	to confirm the performance. 	*
 *					*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#define INC1(a) ((a)+1)
#define INC2 (a) ((a)+1)
#define INC3( a ) (( a ) + 1)
#define INC4 ( a ) (( a ) + 1)
#define MAX 100
/*
#define SQUARE(x) (x*x)
*/
int square(int x) { return(x*x);}

int main()
{
	int a = 1;
/*	int MAX = 1000; */

	printf("%d\n", INC1(a));
	/* printf("%d\n", INC2(a)); */
	printf("%d\n", INC3(a));
	/* printf("%d\n", INC4(a)); */

	/* int x = 36/SQUARE(6);*/
	int x = 36/square(6);

	printf("%d\n", x);
}
