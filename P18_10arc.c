/****************************************
 * 		P18_10arc.c		*
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

int main()
{
	int driver = DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	struct arccoordstype a;
	char arr[100];

	arc(250, 200, 0, 90, 100);
	getarccoords(&a);

	sprintf(arr,"start(%d, %d)", a.xstart, a.ystart);
	outtextxy(350, 200, arr);
	sprintf(arr, "end(%d,%d)", a.xend, a.yend);
	outtextxy(245, 85, arr);
	sprintf(arr, "center(%d,%d)", a.x, a.y);
	outtextxy(250, 250, arr);
	getch();
	closegraph();
}
