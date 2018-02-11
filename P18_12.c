/****************************************
 * 		P18_12.c		*
 * 	This program uses graphics.h	*
 *	to use setfillstype for getting	*
 *	the function information.	*
 *					*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

#define DY delay(1000)

int main()
{
	int driver = DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	struct arccoordstype arcinfo;
	int style, color, max_color;

	max_color = getmaxcolor();
	for(style=0; style < 12 ; style++)
		for(color=0; color <=max_color; color++)
		{
			setfillstyle(style, color);
			bar(50, 50, 200, 100);
			pieslice(150, 150, 45, 135, 50);
			DY;
		}
	closegraph();

	printf("the max_color = %d\n", max_color);
}
