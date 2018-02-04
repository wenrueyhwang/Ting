/*****************************************
 *		P14_3.c  by GUN 	 *
 * 	Program describes union		 *
 * 	the usage of union is sane as 	 *
 *	the struct but the elements of 	 *
 * 	the union are in the same memory * 
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include "ansi.h"

union UNION
{
	char what[16];
	long x[4];
};

int main()
{
	union UNION mystery, *s;

	s = &mystery;

	s->x[0] = 0x6c6c6548;
	s->x[1] = 0x48202c6f;
	s->x[2] = 0x676e6177;
	s->x[3] = 0x000a2121;
	printf("%s\n", s->what);
}

