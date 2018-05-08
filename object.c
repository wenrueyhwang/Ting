/* file: object.c */

#include "object.h"
#include <stdlib.h>
#include <stdio.h>

static void exercise(Object *this)
{
	long i = this->count;
	while(i--);
	putchar('X'); /* send out a signal */
}

/* object constructor */
Object* object_(long count)
{
	Object *this;
	this = (Object*) malloc(sizeof(Object));
	if(this == NULL) exit(1);

	this->count = count;
	this->exercise = exercise;

	return this;
}
/* object point destrutor */
void object__(Object * this)
{
	free(this);
}

