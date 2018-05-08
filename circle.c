/* file: circle.c */

#include "circle.h"
#include <graphics.h>

static void hi(Circle* this)
{
	this->visible = FALSE;
	moveto(this->x, this->y);
	circle(this->x, this->y, this->radius);
}
static void sh(Circle* this)
{
	this->visible = TRUE;
	moveto(this->x, this->y);
	circle(this->x, this->y, this->radius);
}
static void gr(Circle * this, int del_radius)
{
	hide(this);
	this->radius += del_radius;
	show(this);
}

/* circle constructor */
static Graph_Methods circle_methods;
static Boolean circle_flag = FALSE;
extern Graph_Methods graph_methods;

Circle* circle_(int x, int y, int radius, int background, int foreground)
{
	Graph* temp ;
	Circle* this;
	temp = graph_(x,y,background, foreground);

	this = (Circle*) malloc(sizeof(Circle));
	if(this == NULL) exit(1);

	memmove(this, temp, sizeof(Graph));
	memmove(&circle_methods, &graph_methods, sizeof(graph_methods));
	graph__(temp);
	if(!circle_flag)
	{
		circle_flag = TRUE;
		this->methods = &circle_methods;
		this->methods->sho = sh;
		this->methods->hid = hi;
	}
	this->gro = gr;
	this->radius = radius;

	return this;
}
/* graphics circle destrutor */
void circle__(Circle * this)
{
	hide(this); /* remove from screen before destroying. */
	free(this);
}

