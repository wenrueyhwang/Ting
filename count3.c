/* main file = count3.c */
#include "counter3.h"
#include <stdio.h>

int main()
{
	Udcount *a = udcount_(); /* Class Counter instance a */
	Udcount *b = udcount_();


	size_t i;

	for(i=0;i<12;i++)
	{
		/* because the function of increment(struct cnt *) */
		(*a->increment)((Counter *)a);
		(*b->increment)((Counter *)b);
	}
	printf("a = %d and b = %d \n", \
		(*a->query)((Counter *) a), (*b->query)((Counter *)b));
	for(i=0;i<6; i++)
	{
		(*a->increment)((Counter *)a);
		(*b->decrement)(b);
	}

	printf("a = %d and b = %d \n", \
		 (*a->query)((Counter *)a), (*b->query)((Counter *)b));

	udcount__(a);
	udcount__(b);

	return 0;
}

