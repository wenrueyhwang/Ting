/****************************************
 * 		P18_10.c		*
 * 	This program uses graphics.h	*
 *	to use arc() for generating 	*
 *	a little smart kit.		*
 *					*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

#define DY delay(1000)

#define LINE1 line(arcinfo.x+arcinfo.xstart, arcinfo.y+arcinfo.ystart,arcinfo.x, arcinfo.y)
#define LINE2 line(arcinfo.x, arcinfo.y,arcinfo.x+arcinfo.xstart, arcinfo.y-arcinfo.ystart)

int main()
{
	int driver = DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	struct arccoordstype arcinfo;

	arc(300, 300, -135, 135, 150);
	getarccoords(&arcinfo);
	LINE1;
	LINE2;
	outtextxy(arcinfo.x,arcinfo.y , "Start point");
	DY;
	getch();
	closegraph();
	printf("Start (%d,%d)\n", arcinfo.xstart, arcinfo.ystart);
	printf("End (%d,%d)\n", arcinfo.xend, arcinfo.yend);
	printf("(x, y) = (%d, %d)\n", arcinfo.x, arcinfo.y);
	printf("the size of arcinfo = %d\n", sizeof(arcinfo));

	getchar();
/*
	LINE1;
	LINE2;
	getch();
	arc(200, 100, -135, 135, 50);
	circle(150, 100, 10);
	getarccoords(&arcinfo);
	LINE1;
	LINE2;
	getch();
	cleardevice();
	arc(100, 100, 45, -45, 50);
	getarccoords(&arcinfo);
	LINE1;
	LINE2;
	arc(200, 100, -135, 135, 50);
	getarccoords(&arcinfo);
	LINE1;
	LINE2;
	circle(150, 100, 10);
	getch();
	closegraph();
*/
}
