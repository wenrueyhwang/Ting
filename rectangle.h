/* file: rectangle.h */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "defines.h"
#include "graph.h"

/* elements and methods of the class rectangle */
#define RECTANGLE_CLASS \
	GRAPH_CLASS \
	void (*resiz)();\
	int x1, y1;

typedef struct rectangle
{
	RECTANGLE_CLASS
} Rectangle; /* a class named Rectangle */

#define resize(a,b,c) (*(a->resiz))(a, b, c)

/* class constructor and destructor */
Rectangle* rectangle_(int, int, int, int, int, int );

void rectangle__(Rectangle *);

#endif