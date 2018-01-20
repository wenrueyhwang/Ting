/*****************************************
 *		P9_2.c by GUN	 	 *
 * 	The program describes 		 *
 *	the usage of bitfield 	 	 *
 *	operations.			 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <string.h>
void printbit(int p);

#define INT sizeof(int)*8

int main()
{
	int x, x1, x2, y, y1, y2;
	int j;

	printf("Please int a number: ");
	scanf("%d", &x);

	y = -x;
	j = ~x;

	printf("the x = %d\t\t--->\t", x);
	printbit(x);
	printf("the (~x) \t\t--->\t");
	printbit(j);
	x1 = x << 2;
	printf("the (x<<2) = %d\t\t--->\t", x1);
	printbit(x1);
	x2 = x >> 2;
	printf("the (x>>2) = %d\t\t--->\t", x2);
	printbit(x2);
	/*************************************/
	printf("the y = %d\t\t--->\t", y);
	printbit(y);
	y1 = y << 2;
	printf("the (y<<2) =%d\t\t--->\t", y1);
	printbit(y1);
	y2 = y >> 2;
	printf("the (y>>2) = %d\t\t--->\t", y2);
	printbit(y2);
	
	return(1);
}
void printbit(int p)
{
	int temp;
	int i;

	for(i=(INT-1); i>=0; --i)
	{
		temp = p >> i;
		temp &= '\x01';
		if((i+1)%8==0 && i !=(INT-1)) printf("-");
		printf("%1d", temp);
	}
	printf("\n");
}
