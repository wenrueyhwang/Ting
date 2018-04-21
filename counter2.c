/* file counter2.c */
#include "counter2.h"
#include <stdio.h>
#include <stdlib.h> 	/* this is for memory operation */


static void increment(Counter *this)
{
	this->count++;
}

static WORD query(Counter *this)
{
	return this->count;
}
void error_handler(void)
{
	printf("Error ...\n");
}

/* class counter constructor */
Counter *counter_(void)
{
	Counter *this;

	this = (Counter *)(malloc(sizeof(Counter)));

	if(this == NULL)
		error_handler();
	this->count = 0;
	this->increment = increment;
	this->query = query;
	return this;
}
/* class Counter destructor */
void counter__(Counter *this)
{
	free(this);
}

