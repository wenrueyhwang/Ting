/* file: graph.c */
#include "graph.h"
#include <graphics.h>

static Boolean in_visible(Graph* this)
{
	return this->visible;
}
static void hide(Graph* this)
{
}
static void show(Graph* this)
{
}
/* move to a new location */
static void move(Graph* this, int new_x, int new_y)
{
	(*this->hide)(this);
	this->x = new_x;
	this->y = new_y;
	moveto(new_x, new_y);
	(*this->show)(this);
}

/* graph constructor */
Graph* graph_(int x, int y, int background, int foreground)
{
	Graph* this;
	this = (Graph*) malloc(sizeof(Graph));
	if(this == NULL) exit(1);
	this->is_visible = is_visible;
	this->show = show;
	this->hide = hide;
	this->mofe = move;
	this->x = x;
	this->y = y;
	this->background = background;
	this->foreground = foreground;
	this->visible = FALSE;\

	return this;
}
/* graphics point destrutor */
void graph__(Graph * this)
{
	hide(this);
	free(this);
}

