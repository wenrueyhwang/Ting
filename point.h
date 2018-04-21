/* file: point.h */
#ifndef POINT_H
#define POINT_H
#include "defines.h"
#include "graph.h"

/* elements and methods of the class point */
#define POINT_CLASS \
	GRAPH_CLASS

typedef struct point
{
	POINT_CLASS
} Point; /* a class named Point */

/* class constructor and destructor */
Point * point_(int x, int y, int brackground, int foreground);
void point__(Point *);

#endif
