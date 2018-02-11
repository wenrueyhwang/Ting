/****************************************
 * 		P18_20.c		*
 * 	This program uses graphics.h	*
 *	to have the display character 	*
 *	TEXT. 				*
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

#define DY delay(5000)

int main()
{
	int driver = DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	char name[] = "<1>My name is Hwang, Wen-Ruey.";

	rectangle(150, 50, 600, 400);
	setfontcolor(RED);
	outtextxy(200, 60, name);
	setfontcolor(BLUE);
	outtextxy(200, 200, name);
	setfontcolor(GREEN);
	outtextxy(200,300,name);
	floodfill(151, 55, 1);
	DY;

	getch();
	closegraph();
}
