/****************************************
 * 		Prandom.c		*
 * 	This program uses graphics.h	*
 *	to add random moving.	 	*
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
	setcolor(RED);
	bar(50, 50, 590, 430);
	setcolor(GREEN);
	bar(100, 100, 540, 380);
	while(!kbhit())
	{
		putpixel(random(439)+101, random(279)+101, random(16));
		setcolor(random(16));
		circle(320, 240, random(100));
	}

	getch();
	closegraph();
}
