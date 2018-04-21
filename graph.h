/* file: graph.h */
#ifndef GRAPH_H
#define GRAPH_H
#include "defines.h"

/* elements and methods of the class graph */
#define GRAPH_CLASS \
	int x,\
	    y,\
	    background,\
	    foreground; \
	Boolean visible,\
		(* is_visible)(struct graph*);\
	void	(* show)(struct graph*),\
		(* hide)(struct graph*),\
		(* move)(struct graph*, int, int);

typedef struct graph
{
	GRAPH_CLASS
} Graph; /* a class named Graph */

/* class constructor and destructor */
Graph * graph_(int x, int y, int brackground, int foreground);
void graph__(Graph *);

#endif
