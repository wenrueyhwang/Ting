#include "counter1.h"
#include <stdio.h>
#include <stdlib.h> 	/* this is for memory operation */


void increment(Counter *this)
{
	this->count++;
}
int query(Counter *this)
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
	printf("the sizeof Counter = %d\n", sizeof(Counter));
	if(this == NULL)
		error_handler();
	this->count = 0;
	return this;
}
/* class Counter destructor */
void counter__(Counter *this)
{
	free(this);
}

