/* file: lutobj2d.h */

#ifndef LUTOBJ2D_H
#define LUTOBJ2D_H
#include "defines.h"

/* table used below is a pointer to an array of the type ENTRY
  The number of entries in the array must be equal to x_length,
  Each entry contains two values which are of the type BYTE.
*/

typedef struct
{
	BYTE x, y;
} Entry; /* this a type which contains tow element of x and y */

#define LOOK_UP_CLASS \
	int x_length; \
	Entry *table;

typedef struct LUT
{
	LOOK_UP_CLASS

} Lookup; /* this is a type which is a struct that conatins LOOP_UP_CLASS */

/* class constructor and destructor */
Lookup* lookup_(int x_length, Entry *table);

void lookup__(Lookup * this);

BYTE get_value(Lookup *this, BYTE value);
BYTE interpolate(BYTE value, BYTE x0, BYTE y0, BYTE x1, BYTE y1);

#endif
