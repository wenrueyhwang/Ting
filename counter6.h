/* counter6.h for Counter class */

#ifndef COUNTER_H
#define COUNTER_H

#include "defines.h"

/* define a Methers */
#define METHODS\
	void (*incr)();\
	WORD (*quer)();

typedef struct
{
	METHODS
} Methods;

#define COUNT \
	WORD count; \
	Methods *methods;

typedef struct cnt
{
	COUNT
} Counter;

/* using macro to define the methods */
#define increment(a) (*(a)->methods->incr)(a)
#define query(a) (*(a)->methods->quer)(a)

Counter *counter_(void);
void counter__(Counter *);

#endif
