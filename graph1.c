/* C code to illustrate using
graphics in linux environment
*/

#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
	int gd = DETECT, gm;
	int i, x = 10;
	char str[3] = "O";

	initgraph(&gd, &gm, NULL);

	setbkcolor(WHITE);
	setcolor(12);

	circle(50,50,40);
	circle(110, 50, 40);
	line(22,80,80, 140);
	line(80, 140, 138, 80);

	floodfill(50, 50, 12);
	floodfill(110, 50, 12);
	floodfill(80, 50, 12);
	floodfill(80, 100, 12);
	printf("Please hit any key to terminate graphics.\n");
	getchar();
	closegraph();

}

