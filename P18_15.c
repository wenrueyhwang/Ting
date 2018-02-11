/****************************************
 * 		P18_15.c		*
 * 	This program uses graphics.h	*
 *	to use line type to draw 	*
 *	a circle and  get		*
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
	int i, x1, y1, x2, y2, color1, color2;
	unsigned pattern = 0;
/*	struct viewporttype view;*/ 
	struct linesettingstype old;

	getlinesettings(&old);
	rectangle(100, 100,500, 300);
/*	setviewport(100, 100, 500, 300, 1); */
	for(i=0; i<4; i++)
	{
		setlinestyle(i, pattern, 1);
		line(10, i*5+50,100,  10+i*5);
		circle(50, 150, 10+i*5);
	}
	for(i=0; i<4; i++)
	{
		setlinestyle(i, pattern, 3);
		line(150, i*5+50, 230, i*5+50);
		circle(200, 150, 10+i*5);
	}
	setlinestyle(old.linestyle,\
		old.upattern, old.thickness);
	line(300, 50, 350, 50);
	circle(320, 150, 20);
	x1=100, y1=100, x2=100, y2=100;
	color1 = getpixel(x1, y1);
	color2 = getpixel(x2, y2);
/*	getviewsettings(&view); */
	getch();
	closegraph();
	printf("A dot in(%d,%d), the color is %d\n", x1, y1, color1);
	printf("A dot in(%d,%d), the color is %d\n", x2, y2, color2);

}
