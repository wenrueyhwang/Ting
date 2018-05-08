/* counter5.h for Counter class */

#ifndef COUNTER_H
#define COUNTER_H

#include "defines.h"

#define COUNT \
	WORD count; \
	void (*inc)(struct cnt *); \
	WORD (*que)(struct cnt *);

typedef struct cnt
{
	COUNT
} Counter;

/* using macro to define the methods */
#define increment(a) (*(a)->inc)((a))
#define query(a) (*(a)->que)((a))

Counter *counter_(void);
void counter__(Counter *);

#endif
