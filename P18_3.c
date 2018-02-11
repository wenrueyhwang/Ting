/****************************************
 * 		P18_3.c			*
 * 	This program uses graphics.h	*
 *	to draw a cocenter circle 	*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
	int driver=DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	int max_x, max_y, radius;

	max_x = getmaxx();
	max_y = getmaxy();
	
	for(radius = 0; radius < 200; radius += 10)
	{
		circle(max_x/2, max_y/2, radius);
		delay(100);
	}
	outtextxy(150,400,"The end ...\n");
/**************************************************/
	getchar();
	closegraph();
}

