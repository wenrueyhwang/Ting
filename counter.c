#include "counter0.h"
#include <stdio.h>

int main()
{
	size_t i;

	for(i=0;i<12;i++)
		increment();
	printf("a = %d\n", query());
	return 0;
}

