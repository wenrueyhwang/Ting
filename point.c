/* file: point.c */

#include "point.h"
#include <graphics.h>

static void hi(Point* this)
{
	this->visible = FALSE;
	setcolor(this->background);
	putpixel(this->x, this->y, this->background);
}

static void sh(Point* this)
{
	this->visible = TRUE;
	setcolor(this->foreground);
	putpixel(this->x, this->y, this->foreground);
}

/* point constructor */
static Graph_Methods point_methods;
static Boolean point_flag = FALSE;
extern Graph_Methods graph_methods;

Point* point_(int x, int y, int background, int foreground)
{
	Graph* temp = graph_(x,y,background, foreground);
	Point* this;

	this = (Point*) malloc(sizeof(Point));
	if(this == NULL) exit(1);

	memmove(this, temp, sizeof(Graph));
	memmove(&point_methods, &graph_methods, sizeof(graph_methods));
	graph__(temp);

	if(!point_flag)
	{
		point_flag = TRUE;
		this->methods = &point_methods; /* update the pointer */
		this->methods->sho = sh;
		this->methods->hid = hi;
	}
	return this;
}
/* graphics point destrutor */
void point__(Point * this)
{
	hide(this); /* remove from screen before destroying. */
	free(this);
}

