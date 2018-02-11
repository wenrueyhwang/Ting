/****************************************
 * 		P18_5.c			*
 * 	This program uses graphics.h	*
 *	to get the size of x and y. 	*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <math.h>
#include <graphics.h>

int main()
{
	int driver = DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	int max_x, max_y, max_color;

	max_x = getmaxx();
	max_y = getmaxy();
	max_color = getcolor();

	closegraph();
/**************************************************/
	printf("Your screen driver number is = %d\n", driver);
	printf("Your graphic mode number is = %d\n", mode);
	printf("Your screen size is (0, 0, %d, %d)\n", max_x, max_y);
	printf("Your screen can be used %d colors.\n", max_color);
}

