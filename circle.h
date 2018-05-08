/* file: circle.h */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "defines.h"
#include "graph.h"

/* elements and methods of the class circle */
#define CIRCLE_CLASS \
	GRAPH_CLASS\
	void (*gro)();\
	int radius;

typedef struct circle
{
	CIRCLE_CLASS
} Circle; /* a class named Circle */

#define grow(a,b) (*(a->gro)) (a,b)

/* class constructor and destructor */
Circle * circle_(int x, int y, int radius, \
		int background, int foreground);
void circle__(Circle *);

#endif

