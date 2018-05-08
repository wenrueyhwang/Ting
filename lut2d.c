#include "lutobj2d.h"
#include <stdlib.h>
#include <stdio.h>

Entry taba[] = {
	0, 0,
	96, 40,
	144, 66,
	166, 128,
	221, 160,
	255, 160 };

Entry tabb[] = {
	0, 0,
	96, 128,
	144, 139,
	166, 158,
	221, 178,
	238, 184,
	255, 255 };

Entry tabc[] = {
	0, 0,
	96, 162,
	144, 117,
	166, 196,
	221, 255,
	238, 184,
	255, 178 };

void main()
{
	size_t i;

	Lookup* a = lookup_(sizeof(taba)/2, taba);
	Lookup* b = lookup_(sizeof(tabb)/2, tabb);
	Lookup* c = lookup_(sizeof(tabc)/2, tabc);
/*
	printf("the size of %d \n", sizeof(taba)/2);
*/
	for(i=0;i<255; i+=10)
		printf(" %d\t%d\t%d\t%d\n", i, get_value(a, i),
			get_value(b, i), get_value(c,i));
	getchar();
	printf("\n");
	for(i=210; i<230; i++)
		printf(" %d\t%d\t%d\t%d\n", i, get_value(a, i), \
			get_value(b,i), get_value(c,i));
	lookup__(a);
	lookup__(b);
	lookup__(c);
}

