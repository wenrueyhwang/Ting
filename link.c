/* file: link.c */

#include "link.h"
#include <stdlib.h>
#include <stdio.h>

/* object constructor */
Link* link_(Object *obj)
{
	Link *this;
	this = (Link*) malloc(sizeof(Link));
	if(this == NULL) exit(1);

	this->current_object= obj;
	this->previous_link = NULL;
	this->next_link = NULL;

	return this;
}
/* link point destrutor */
void link__(Link * this)
{
	free(this);
}

