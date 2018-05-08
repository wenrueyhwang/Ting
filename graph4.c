/* file: graph4.c */

#include "graph4.h"
#include <graphics.h>

static Boolean is_vi(Graph* this)
{
	return this->visible;
}
static void hi(Graph* this)
{
}
static void sh(Graph* this)
{
}
/* move to a new location */
static void mo(Graph* this, int new_x, int new_y)
{
	(*this->methods->hid)(this);
	this->x = new_x;
	this->y = new_y;
	moveto(new_x, new_y);
	(*this->methods->sho)(this);
}

/* new type of graph_methods */
static Graph_Methods graph_methods;
static Boolean graph_flag = FALSE;

/* graph constructor */
Graph* graph_(int x, int y, int background, int foreground)
{
	Graph* this;
	this = (Graph*) malloc(sizeof(Graph));
	if(this == NULL) exit(1);

	this->x = x;
	this->y = y;
	this->background = background;
	this->foreground = foreground;
	this->visible = FALSE;

	if(!graph_flag)
	{
		graph_flag = TRUE;
		this->methods = &graph_methods;
		this->methods->sho = (void*)sh;
		this->methods->hid = (void*)hi;
		this->methods->mov = (void*)mo;
		this->methods->is_vis = (void*)is_vi;
	}
	return this;
}
/* graphics point destrutor */
void graph__(Graph * this)
{
/*	hide(this); */
	free(this);
}

