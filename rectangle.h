/* file: rectangle.h */
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "defines.h"
#include "graph.h"

/* elements and methods of the class rectangle */
#define RECTAGNEL_CLASS \
	GRAPH_CLASS\
	void (*resize)(struct rectangle *, int, int);\
	int x1, y1;

typedef struct rectangle
{
	RECTANGLE_CLASS
} Rectangle; /* a class named Rectangle */

/* class constructor and destructor */
Rectangle * rectangle_(int x0, int y0, int x1, int y1, \
		int background, int foreground);
void rectangle__(Rectangle *);

#endif
