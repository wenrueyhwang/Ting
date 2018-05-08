/* file: lutobjnu.c */

#include "lutobjnu.h"
#include <stdlib.h>

BYTE get_value(Lookup *this, BYTE value)
{
	size_t i = 0;

	i = table_search(this, value);
/*
	while(this->table[i].x <= value)
		i++;
	--i;
*/

	if(this->table[i].x == value)
		return this->table[i].y;
	else
		return interpolate(value, \
			this->table[i].x,\
			this->table[i].y,\
			this->table[i+1].x,\
			this->table[i+1].y);
}

Lookup* lookup_(int x_length, Entry *table)
{

	Lookup* this;

	this = (Lookup *)malloc(sizeof(Lookup));
	if(this == NULL) exit(1);

	this->x_length = x_length;
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

BYTE interpolate(BYTE value, BYTE x0, BYTE y0, BYTE x1, BYTE y1)
{
	WORD v = (WORD)value;
	WORD xx0 = (WORD) x0;
	WORD yy0 = (WORD) y0;
	WORD xx1 = (WORD) x1;
	WORD yy1 = (WORD) y1;

	if(yy1 > yy0)
		return yy0+(v-xx0)*(yy1-yy0)/(xx1-xx0);
	else
		return yy0-(v-xx0)*(yy0-yy1)/(xx1-xx0);
}
static int table_search(Lookup *this, BYTE value)
{
	int top, bottom, middle;

	top = this->x_length - 1;
	bottom = 0;

	while((top - bottom) > 1)
	{
		middle = (top + bottom)/2;
		if(value > this->table[middle].x)
			bottom = middle;
		else if(value < this->table[middle].x)
			top = middle;
		else
			return middle;
	}
	return bottom;
}

