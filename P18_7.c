/****************************************
 * 		P18_7.c			*
 * 	This program uses graphics.h	*
 *	to open a viewpoint	 	*
 *					*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
	int driver = DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	bar(100, 100, 200, 200);
	getchar();
/*	clearviewport();
	setviewport(100, 100, 200, 200, 1); */
	rectangle(0, 0, 200, 200);
	circle(0, 0, 50);
	getchar();
/*	cleardevice();
	setviewport(100, 100, 200, 200, 0); */
	rectangle(0, 0, 100, 100);
	circle(100, 100, 50);
	getchar();
	bar(50, 50, 150, 150);
/*	clearviewport(); */
	getchar();
/*	setviewport(150, 150, 200, 200, 1);*/
	bar(0, 0, 50, 50);
	getchar();

	closegraph();
/**************************************************/
}

