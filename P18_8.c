/****************************************
 * 		P18_8.c			*
 * 	This program uses graphics.h	*
 *	to comparison of	 	*
 *	moveto(), moverel()		*
 *	lineto(), linerel()		*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

#define DY delay(5000)

int main()
{
	int driver = DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	moveto(300, 300);
	outtextxy(300, 300, "moveto(300, 300)");
	DY;
	lineto(50, 50);
	outtextxy(50, 50, "lineto(50, 50)");
	DY;
	moverel(250, 0);
	outtextxy(300, 50, "moverel(300, 50)");
	DY;
	linerel(-250, 250);
	outtextxy(50, -200, "linerel(50, -200)");
	DY;
	moveto(175, 175);
	outtextxy(175, 175,"moveto(175, 175)");
	DY;
	linerel(-175, -100);
	outtextxy(0, 75,"linerel(0, 75)");
	DY;
	moveto(175, 175);
	outtextxy(175, 175, "moveto(175, 175)");
	DY;
	linerel(125, 0);
	outtextxy(50, 175, "linerel(125, 0)");

	getchar();
	closegraph();
/**************************************************/
}

