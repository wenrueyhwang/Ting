/* file: linklist.h */

#ifndef LINKLIST_H
#define LINKLIST_H
#include "defines.h"
#include "object.h"
#include "link.h"

/* elements and methods of the class linklist */
#define LINKLIST_CLASS void *head;

typedef struct linklist
{
	LINKLIST_CLASS
} Linklist; /* a class named Linklist */

/* class constructor and destructor */
Linklist *linklist_(void);
void linklist__(Linklist *);

/* global functions */
void walk_list(Linklist *list);
int add_link(Linklist *list, Link *new_link);
int delete_link(Linklist *list, Link *old_link);


#endif
