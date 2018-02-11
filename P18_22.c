/****************************************
 * 		P18_22.c		*
 * 	This program uses graphics.h	*
 *	to get conjunction with  	*
 *	setgraphmode() to switch back	*
 *	and forth between text amd 	*
 *	graphics modes			*
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
	int driver=DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	int i;

	mode = getgraphmode();
	for(i=0; i< 5; i++)
		circle(50+i*50, 30+i*50, 40);
	outtextxy(5,300,">>>Please press anh key ....");
	getch();
	restorecrtmode();

	printf("HI! I am here\n");
	printf("Here is TEXT mode\n");
	printf("Welcome to TEXT mode\n\n");
	printf("Please press any key to return ");
	printf("GRAPHICS mode\n");
	getchar();
	setgraphmode(mode);
	outtext("Now you return graphics mode");
	bar3d(100, 100, 200, 200, 50, RED);
	outtextxy(10, 210, "Press any key to stop !!");
	getch();
	closegraph();
}
