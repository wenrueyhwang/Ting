/* file counter2.c */
#include "counter5.h"
#include <stdio.h>
#include <stdlib.h> 	/* this is for memory operation */


static void inc(Counter *this)
{
	this->count++;
}

static WORD que(Counter *this)
{
	return this->count;
}


/* class counter constructor */
Counter *counter_(void)
{
	Counter *this;

	this = (Counter *)(malloc(sizeof(Counter)));

	if(this == NULL)
		exit(1);
	this->count = 0;
	this->inc = inc;
	this->que = que;
	return this;
}
/* class Counter destructor */
void counter__(Counter *this)
{
	free(this);
}

