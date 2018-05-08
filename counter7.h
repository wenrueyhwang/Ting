/* counter7.h for Counter class with up/down counter*/

#ifndef UDCOUNTER_H
#define UDCOUNTER_H

#include "defines.h"
#include "counter6.h"

#define UDCOUNT \
	COUNT \
	void (*decrement)(struct udcount *);

typedef struct udcount
{
	UDCOUNT
} Udcount;


Udcount *udcount_(void);
void udcount__(Udcount *);

#endif
