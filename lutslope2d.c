#include "lutslope.h"
#include <stdlib.h>
#include <stdio.h>

Entry taba[] = {
	0, 0, 0x6a,
	96, 40, 0x95,
	144, 66, 0x2ba,
	166, 128, 0x94,
	221, 160, 0x0,
	255, 160 };

Entry tabb[] = {
	0, 0, 0x155,
	96, 128, 0x3a,
	144, 139, 0xdd,
	166, 158, 0x5d,
	221, 178, 0x5a,
	238, 184, 0x42d,
	255, 255 };

Entry tabc[] = {
	0, 0, 0x1b0,
	96, 162, 0xff10,
	144, 117, 0x397,
	166, 196, 0x112,
	221, 255, 0xfbd3,
	238, 184, 0xffa6,
	255, 178 };

void main()
{
	int i;

	Lookup* a = lookup_(6, taba);
	Lookup* b = lookup_(7, tabb);
	Lookup* c = lookup_(7, tabc);

	printf("the size of %d \n", sizeof(tabb));

	for(i=0;i<255; i+=10)
		printf(" %3d\t%3d\t%3d\t%3d\n", i, get_value(a, i), \
			get_value(b, i), get_value(c,i));
	getchar();
	printf("\n");
	for(i=210; i<230; i++)
		printf(" %3d\t%3d\t%3d\t%3d\n", i, get_value(a, i), \
			get_value(b,i), get_value(c,i));
	lookup__(a);
	lookup__(b);
	lookup__(c);
}

