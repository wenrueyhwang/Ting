/****************************************
 * 		P18_9.c			*
 * 	This program uses graphics.h	*
 *	to test the color of	 	*
 *	background, frodground		*
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
	int i,j,color1[10], color2, color3;

	for(i=0;i<4;i++)
	{
		setbkcolor(i);
		color1[i] = getbkcolor();
	}
	setbkcolor(BLACK);
	bar(100, 100, 200, 200);
	setcolor(BLACK);
	circle(150, 150, 50);
	color2 = getcolor();
	setcolor(BLUE);
	circle(230, 230, 20);
	color3 = getcolor();
	getchar();
	closegraph();
/*********************************************/
	for(j = 0; j< 4; j++)
		printf("Background %d number is %d\n", j, color1[j]);
	printf("Circle1 color number is %d\n", color2);
	printf("Circle2 color number is %d\n", color3);

/**************************************************/
}

