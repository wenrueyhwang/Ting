/* file: lutslope.h */

#ifndef LUTOBJ_H
#define LUTOBJ_H
#include "defines.h"

/* table used below is a pointer to an array of the type ENTRY
  The number of entries in the array must be equal to x_length,
  Each entry contains two values which are of the type BYTE.
*/

#ifndef ENTRYF
#define ENTRYF
typedef struct
{
	BYTE x, y;
	int slope;
} Entry; /* this a type which contains tow element of x and y */
#endif

#define LOOK_UP_CLASS \
	int length; \
	Entry *table;

typedef struct LUT
{
	LOOK_UP_CLASS

} Lookup; /* this is a type which is a struct that conatins LOOP_UP_CLASS */

/* class constructor and destructor */
Lookup* lookup_(int length, Entry *table);
void lookup__(Lookup * this);
BYTE get_value(Lookup *this, BYTE value);
BYTE interpolate(BYTE value, BYTE x0, BYTE y0, int slope);
static int table_search(Lookup *, BYTE);

#endif
