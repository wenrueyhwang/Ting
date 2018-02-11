/* C code to illustrate using
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
	initgraph(&gd, &gm, NULL);

	line(0, GMY/2, GMX, GMY/2);
	line(GMX/2, 0, GMX/2, GMY);
	setcolor(BLUE);
	circle(GMX/2, GMY/2, 150);

	setcolor(GREEN);
	circle(GMX/2, GMY/2, 75);

	setcolor(RED);
	circle(GMX/2, GMY/2, 25);

	getchar();

	closegraph();

}

