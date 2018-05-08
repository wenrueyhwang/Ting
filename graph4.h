/* file: graph4.h */
#ifndef GRAPH4_H
#define GRAPH4_H

#include "defines.h"

/* elements and methods of the class graph */
#define GRAPH_METHODS \
	Boolean (* is_vis)(); \
	void	(* sho)(), \
		(* hid)(), \
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

typedef struct graph
{
	GRAPH_CLASS
} Graph; /* a class named Graph */


/* define all methods of class */
#define show(a) (*(a)->methods->sho)(a)
#define hide(a) (*(a)->methods->hid)(a)
#define is_visible(a) (*(a)-methods->is_vis)(a)
#define move(a,b,c) (*(a)->methods->mov)(a,b,c)

/* class constructor and destructor */
Graph * graph_(int, int, int, int);
void graph__(Graph *);

#endif
