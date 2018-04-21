#ifndef COUNTER_H
#define COUNTER_H

#include "defines.h"

struct
{
	WORD count;
} Counter;

void increment(void);
int query(void);

#endif
