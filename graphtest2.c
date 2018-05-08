/* file = graphtest2.c 
 to integrate all graph, point, circle, and rectangle class */

#include <graphics.h>
#include <stdio.h>

#include "point1.h"
/*
#include "circle.h"
#include "rectangle.h"
*/

int main()
{
	int driver, mode;
	driver = DETECT;
	initgraph(&driver, &mode, "");

	int foreground = 15, background = 0;


	Point *pt = point_(320, 240, background, foreground);
/*
	Circle *cir = circle_(320, 240, 80, background, foreground);
	Rectangle *rect = rectangle_(241, 321, 401, 161, \
			background, foreground);
*/
/*	setgraphicmode(VGA); */


	show(pt);
/*
	(*cir->show)((Graph*)cir);
	(*rect->show)((Graph*)rect);
*/
	getch();
/*
	(*rect->move)((Graph*)rect, 401, 321);
	(*cir->move)((Graph*)cir, 240, 240);
*/
	move(pt, 0, 240);
/*
	getch();

	(*rect->resize)(rect, 100, -100);
*/
	getch();
	closegraph();
	return(0);
}

