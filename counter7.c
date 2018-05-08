/* file counter7.c */
#include "counter7.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 	/* this is for memory operation */


static void decrement(Udcount *this)
{
	this->count--;
}

/* class counter constructor */
Udcount *udcount_(void)
{
	Udcount *this;
	Counter *temp = counter_(); /* based class */

	this = (Udcount *)(malloc(sizeof(Udcount)));

	if(this == NULL)
		exit(1);

	memmove(this, temp, sizeof(Counter));
	counter__(temp);

	this->decrement = decrement;
	return this;
}
/* class Counter destructor */
void udcount__(Udcount *this)
{
	free(this);
}
