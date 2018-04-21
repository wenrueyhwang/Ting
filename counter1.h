#ifndef COUNTER_H
#define COUNTER_H

#include "defines.h"

typedef struct
{
	WORD count;
} Counter;

void increment(Counter *);
int query(Counter *);

Counter *counter_(void);
void counter__(Counter *);
#endif
