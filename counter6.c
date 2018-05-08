/* file counter6.c */
#include "counter6.h"
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

static Methods meth;
static Boolean count_flag = FALSE;


/* class counter constructor */
Counter *counter_(void)
{
	Counter *this;

	this = (Counter *)(malloc(sizeof(Counter)));

	if(this == NULL)
		exit(1);

	this->count = 0;
	this->methods = &meth;
	if(!count_flag)
	{
		count_flag = TRUE;
		this->methods->incr = inc;
		this->methods->quer = que;
	}
	return this;
}
/* class Counter destructor */
void counter__(Counter *this)
{
	free(this);
}
