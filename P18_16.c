/****************************************
 * 		P18_16.c		*
 * 	This program uses graphics.h	*
 *	to draw a poly.		 	*
 *					*
 *					*
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
	int poly1[] = { 50, 60, 70, 90, \
		100, 20, 0, 0, 50, 60};
	int poly2[] = { 200, 50, 200, 0, \
		500, 20, 220, 40};
	int poly3[] = {130, 140, 150, 170, \
		180, 0, 120, 120, 130, 140};
	int poly4[] = {20, 290, 30, 240, \
		100, 260, 40, 280};

	drawpoly(sizeof(poly1)/(2*sizeof(int)), poly1);
	drawpoly(sizeof(poly2)/(2*sizeof(int)), poly2);
/*	setfillstyle(2, 1); */
	fillpoly(sizeof(poly3)/(2*sizeof(int)), poly3);
	fillpoly(sizeof(poly4)/(2*sizeof(int)), poly4);
/*	setfillstyle(3,1); */
	bar3d(200, 200, 250, 250, 100, 1);
/* 	setfillstyle(4, 1); */
	floodfill(260, 220, 1);
/*	setfillstyle(5, 1); */
	circle(300, 300, 40);
	circle(300, 300, 20);
	floodfill(330, 300, 1);
	getch();
	closegraph();
}
