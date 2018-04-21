/* counter2.h for Counter class */

#ifndef COUNTER_H
#define COUNTER_H

#include "defines.h"

#define COUNT \
	WORD count; \
	void (*increment)(struct cnt *); \
	WORD (*query)(struct cnt *);

typedef struct cnt
{
	COUNT
} Counter;

Counter *counter_(void);
void counter__(Counter *);

#endif
