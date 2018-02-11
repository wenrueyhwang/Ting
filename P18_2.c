/****************************************
 * 		P18_2.c			*
 * 	This program uses detectgraph	*
 *	to find out the 	 	*
 *	driver and mode of the system	*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
	int driver=DETECT, mode;
	initgraph(&driver, &mode, NULL);

	line(150, 150, 150, 400);
	line(150, 150, 400, 400);
	line(150, 400, 400, 400); 

	getchar();
	closegraph();
}

