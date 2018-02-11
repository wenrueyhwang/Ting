/* graph3.c C code to illustrate using
graphics in linux environment
*/

#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#define GMX getmaxx()
#define  GMY getmaxy()

int main()
{
	int gd = DETECT, gm;
	int left=100, top=100, right=200, bottom=200, x=300, y=150, radius=50;
	initgraph(&gd, &gm, NULL); /* This must be run before drawing anything.*/

	rectangle(left, top, right, bottom);
	circle(x, y, radius);
	bar(left+300, top, right + 300, bottom);
	line(left-10, top + 150, left + 410, top + 150);
	ellipse(x, y + 200, 0, 360, 100, 50);
	outtextxy(left + 100, top + 325, "C Graphics Program.");

	getchar();

	closegraph();

}

