/* to integrate all graph, point, circle, and rectangle class */
#include <graphics.h>
#include <stdio.h>
#include "point.h"
#include "circle.h"
#include "rectangle.h"


int main()
{
	int driver, mode;
	driver = DETECT;
	initgraph(&driver, &mode, "");

	int foreground = 15, background = 0;

	Point *pt = point_(320, 240, background, foreground);
	Circle *cir = circle_(320, 240, 80, background, foreground);

	Rectangle *rect = rectangle_(241, 321, 401, 161, \
			background, foreground);


/*	setgraphicmode(VGA); */

	getch();

	show(pt);
	show(cir);
	show(rect);

	getch();

	move(rect, 401, 321);

	move(cir, 240, 240);

	move(pt, 240, 240);

	getch();

	resize(rect, 100, -100);

	grow(cir, 160);

	getch();
	closegraph();
	return(0);
}

