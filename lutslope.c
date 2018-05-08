/* file: lutslope.c */

#include "lutslope.h"
#include <stdlib.h>

BYTE get_value(Lookup *this, BYTE value)
{
	int i;

	i = table_search(this, value);

	if(this->table[i].x == value)
		return this->table[i].y;
	else
		return interpolate(value, \
			this->table[i].x,\
			this->table[i].y,\
			this->table[i].slope);
}

Lookup* lookup_(int length, Entry *table)
{

	Lookup* this;

	this = (Lookup *)malloc(sizeof(Lookup));
	if(this == NULL) exit(1);

	this->length = length;
	this->table = table;

	return this;
}

/* look_up point destrutor */
void lookup__(Lookup *this)
{
	free(this);
}



/* interpolate function can be used by other look-up tables,
  such as a three-dimensional look-up. This function works only
  for unsigned numbers, both inputs and outputs. It is assumed
  that x progresses monotonically, but y need not.

*/

BYTE interpolate(BYTE value, BYTE x0, BYTE y0, int slope)
{
	WORD v = (WORD)value;
	WORD xx0 = (WORD) x0;
	WORD yy0 = (WORD) y0;

	return yy0+(long)(value-xx0)*(long)slope/256;
}

static int table_search(Lookup *this, BYTE value)
{
	int top, bottom, middle;

	top = this->length-1;
	bottom = 0;

	while(top-bottom > 1)
	{
		middle = (top+bottom)/2;
		if(value > this->table[middle].x)
			bottom = middle;
		else if(value < this->table[middle].x)
			top = middle;
		else
			return middle;
	}
	return bottom;
}

