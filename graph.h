/* file: graph.h */
#ifndef GRAPH_H
#define GRAPH_H
#include "defines.h"

/* elements and methods of the class graph */
#define GRAPH_METHODS \
	Boolean (* is_vis)();\
	void 	(* sho)(),\
		(* hid)(),\
		(* mov)();
typedef struct
{
	GRAPH_METHODS
} Graph_Methods;

#define GRAPH_CLASS \
	int x,\
	    y,\
	    background,\
	    foreground; \
	Boolean visible;\
	Graph_Methods *methods;

/*
		(* is_visible)(struct graph*);\
	void	(* show)(struct graph*),\
		(* hide)(struct graph*),\
		(* move)(struct graph*, int, int);
*/

typedef struct 
{
	GRAPH_CLASS
} Graph; /* a class named Graph */

#define is_visible(a) (*(a)->methods->is_vis)(a)
#define show(a) (*(a)->methods->sho)(a)
#define hide(a) (*(a)->methods->hid)(a)
#define move(a, b, c) (*(a)->methods->mov)(a, b, c)

/* class constructor and destructor */
Graph * graph_(int x, int y, int brackground, int foreground);
void graph__(Graph *);

#endif