/* main file = count5.c */
#include "counter5.h"
#include <stdio.h>

int main()
{
	Counter *a = counter_(); /* Class Counter instance a */
	Counter *b = counter_();

	size_t i;

	for(i=0;i<12;i++)
	{
		increment(a);
		increment(b);
	}
	for(i=0;i<6; i++)
		increment(a);

	printf("a = %d and b = %d \n", query(a), query(b));
	counter__(a);
	counter__(b);

	return 0;
}

