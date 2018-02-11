/****************************************
 * 		P18_14.c		*
 * 	This program uses graphics.h	*
 *	to use aspect ratio to draw 	*
 *	a bar and  get			*
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
	int xasp, yasp;
	double ratio, y1, y2;
/*
	getaspectratio(&xasp, &yasp);
	ratio = (double)xasp/(double)yasp;
*/
	ratio = 1.25;
	y1 = 50 * ratio;
	y2 = 100 * ratio;
	bar3d(50, y1, 100, y2, 10, 0);
	bar3d(150, y1, 200, y2, 10, 1);
/*	setfillstyle(3, 1); */
	bar3d(250, 50, 300, 100, 10, 1);
	bar3d(350, 50, 400, 100, 10, 0);
	getch();
	closegraph();
/*
	printf("The graphics mode X = %d\n", xasp);
	printf("The graphics mode Y = %d\n", yasp);
	printf("The (50)y1 = %4f, (100)y2 = %4f\n", y1, y2);
*/
}
