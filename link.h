/* file: link.h */

#ifndef LINK_H
#define LINK_H
#include "defines.h"
#include "object.h"

/* elements and methods of the class link */
#define LINK_CLASS \
	Object *current_object; \
	struct link *previous_link; \
	struct link *next_link;

typedef struct link
{
	LINK_CLASS
} Link; /* a class named Link */

/* class constructor and destructor */
Link *link_(Object *);
void link__(Link *);

#endif
