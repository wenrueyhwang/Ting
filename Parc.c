/****************************************
 * 		Parc.c			*
 * 	This program uses graphics.h	*
 *	to use arc(x,y,stan, enan,rad)	*
 *	for getting			*
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
	int driver = DETECT, mode, errorcode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	int midx, midy;
	int stangle = 45, endangle = 135, radius = 100;
/*
	errorcode = graphresult();
	if(errorcode != 0)
	{
		printf("Graphics error: %s\n", grapherrormsg(errorcode));
		printf("Press any key to halt:");
		getch();
		exit(1);
	}
*/
	midx = getmaxx()/2;
	midy = getmaxy()/2;
	setcolor(GREEN);
	/* draw arc */
	arc(midx, midy, stangle, endangle, radius);
	outtextxy(midx, midy, "*This is the center.");
	/* clean up */
	getch();
	closegraph();
	exit(0);
}
