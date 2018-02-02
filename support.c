#include <stdio.h>

extern int count;

int write_extern()
{

	printf("the extern number is %d\n", count);
}

