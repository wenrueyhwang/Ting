/* file: rectangle.c */

#include "rectangle.h"
#include <graphics.h>

static void draw_rectangle(int, int, int, int);

static void hi(Rectangle* this)
{
	this->visible = FALSE;
	setcolor(this->background);
	draw_rectangle(this->x, this->y, this->x1, this->y1);
}
static void sh(Rectangle* this)
{
	this->visible = TRUE;
	setcolor(this->foreground);
	draw_rectangle(this->x, this->y, this->x1, this->y1);
}
static void res(Rectangle * this, int x_new, int y_new)
{
	Boolean see = this->visible;
	hide(this);
	this->x1 = this->x + x_new;
	this->y1 = this->y + y_new;
	if(see) show(this);
}
static void mo(Rectangle * this, int x_new, int y_new)
{
	int delx, dely;

	delx = x_new - this->x;
	dely = y_new - this->y;
	hide(this);
	this->x = x_new;
	this->y = y_new;
	this->x1 += delx;
	this->y1 += dely;
	show(this);
}
static void draw_rectangle(int x1, int y1, int x2, int y2)
{
	moveto(x1, y1);
	lineto(x2, y1);
	lineto(x2, y2);
	lineto(x1, y2);
	lineto(x1, y1);
}

/* rectangle class constructor */
static Graph_Methods rectangle_methods;
static Boolean rectangle_flag = FALSE;
extern Graph_Methods graph_methods; /* global graph_methods from graph.h */

Rectangle* rectangle_(int x, int y, int x1, int y1, \
		int background, int foreground)
{
	Graph* temp ;
	Rectangle* this;

	temp = graph_(x, y, background, foreground);

	this = (Rectangle*) malloc(sizeof(Rectangle));
	if(this == NULL) exit(1);

	memmove(this, temp, sizeof(Graph));
	memmove(&rectangle_methods, &graph_methods, sizeof(graph_methods));
	graph__(temp);

	if(!rectangle_flag)
	{
		rectangle_flag = TRUE;
		this->methods = &rectangle_methods;
		this->methods->sho = sh;
		this->methods->hid = hi;
		this->methods->mov = mo;
	}
	this->resiz = res;
	this->x1 = x1;
	this->y1 = y1;

	return this;
}
/* graphics rectangle destrutor */
void rectangle__(Rectangle * this)
{
	hide(this); /* remove from screen before destroying. */
	free(this);
}

