#include "counter0.h"

void increment(void)
{
	Counter.count++;
}
int query(void)
{
	return Counter.count;
}

