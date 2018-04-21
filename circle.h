/* file: circle.h */
#ifndef CIRCLE_H
#define CIRCLE_H
#include "defines.h"
#include "graph.h"

/* elements and methods of the class circle */
#define CIRCLE_CLASS \
	GRAPH_CLASS\
	void (*grow)(struct circle *, int);\
	int radius;

typedef struct circle
{
	CIRCLE_CLASS
} Circle; /* a class named Circle */

/* class constructor and destructor */
Circle * circle_(int x, int y, int radius, \
		int background, int foreground);
void circle__(Circle *);

#endif
