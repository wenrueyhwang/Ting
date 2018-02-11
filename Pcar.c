/****************************************
 * 		Pcar.c			*
 * 	This program uses graphics.h	*
 *	to generate a moving car. 	*
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
	int i, j = 0;
	outtextxy(25, 240, "press any key to view the moving car");
	getch();
	for(i=0; i<=420; i += 10, j++)
	{
		rectangle(50+i, 275, 150+i, 400);
		rectangle(150+i, 350, 200+i, 400);
		circle(75+i, 410, 10);
		circle(175+i, 410, 10);
		setcolor(j);
		delay(100);
		if (i == 420) break;
		if(j == 15) j = 2;
		cleardevice();
	}
	

	getch();
	closegraph();
}
