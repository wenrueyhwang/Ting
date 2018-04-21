/* main file = count2.c */
#include "counter2.h"
#include <stdio.h>

int main()
{
	Counter *a = counter_(); /* Class Counter instance a */
	Counter *b = counter_();

	size_t i;

	for(i=0;i<12;i++)
	{
		(*a->increment)(a);
		(*b->increment)(b);
	}
	for(i=0;i<6; i++)
		(*a->increment)(a);

	printf("a = %d and b = %d \n", (*a->query)(a), (*b->query)(b));
	counter__(a);
	counter__(b);

	return 0;
}

