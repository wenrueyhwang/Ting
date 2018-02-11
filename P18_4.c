/****************************************
 * 		P18_4.c			*
 * 	This program uses graphics.h	*
 *	to draw a sine wave data 	*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <math.h>
#include <graphics.h>

int main()
{
	int driver=DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	int max_y;
	double x, y;

	max_y = getmaxy();

	for(x = 0; x < 6.3; x += 0.01)
	{
	 	y = -100*sin(x);
		putpixel(100*x, max_y/2, BLUE);
		putpixel(100*x, y + (max_y/2), RED);
	}
	outtextxy(150,max_y-50,"The end ...\n");
/**************************************************/
	getchar();
	closegraph();
}

