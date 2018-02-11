/****************************************
 * 		P18_17.c		*
 * 	This program uses graphics.h	*
 *	to test image operation. 	*
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
/*	struct viewporttype view; */
	unsigned size;
	void *buffer;
	int i;

/*	getviewsettings(&view); *
	setviewport(100, 100, 200, 200, 1); */
	circle(50, 50, 40);
	circle(50, 50, 20);
/*	setfillstyle(1,1); */
	floodfill(80, 50, 1);
/*	size = imagesize(0, 0, 100, 100, buffer); */
	buffer = malloc(size);
/*	getimage(0, 0, 100, 100, buffer); */

/*	setviewport(view.left, view.top, view.right,\
		 view.bottom, view.clip); 
 	clearviewport(); */
/*
	for(i=0; i<5; i++)
		putimage(0+i*100, 0, buffer, 0);
	for(i=0; i<5; i++)
		putimage(20+i*100, 25, buffer, 1);
	for(i=0; i<5; i++)
		putimage(0+i*100, 150, buffer, 0);
	for(i=0; i<5; i++)
		putimage(20+i*100, 175, buffer, 2);
*/
	getch();
	closegraph();
	free(buffer);
}
