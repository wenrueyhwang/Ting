/* file: object.h */
#ifndef OBJECT_H
#define OBJECT_H
#include "defines.h"

/* elements and methods of the class object */
#define OBJECT_CLASS \
	void (*exercise)(struct object *);\
	long count;

typedef struct object
{
	OBJECT_CLASS
} Object; /* a class named Object */

/* class constructor and destructor */
Object *object_(long);
void object__(Object *);

#endif
