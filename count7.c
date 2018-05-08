/* main file = count7.c */
#include "counter7.h"
#include <stdio.h>

int main()
{
	Udcount *a = udcount_(); /* Class Counter instance a */
	Udcount *b = udcount_();


	size_t i;

	for(i=0;i<12;i++)
	{
		/* because the function of increment(struct cnt *) */
		increment(a);
		increment(b);
	}
	printf("a = %d and b = %d \n", query(a), query(b));
	for(i=0;i<6; i++)
	{
		increment(a);
		(*b->decrement)(b);
	}

	printf("a = %d and b = %d \n", query(a), query(b));

	udcount__(a);
	udcount__(b);

	return 0;
}

