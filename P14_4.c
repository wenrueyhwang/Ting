/*****************************************
 *		P14_4.c  by GUN 	 *
 * 	Program describes bit-field	 *
 * 	using the union struct. 	 *
 *	Note the byte is from low to  	 *
 * 	high of the memory 		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include "ansi.h"

struct  FIELDS
{
	unsigned f5 : 3;
	unsigned    : 0;
	unsigned f4 : 6;
	unsigned f3 : 4;
	unsigned f2 : 2;
	unsigned f1 : 1;
};
struct LONGI
{
	unsigned i2;
	unsigned i1;
};

union UNION
{
	struct LONGI i;
	struct FIELDS f;
};

int main()
{
	union UNION var;
	var.i.i1 = 7;
	var.i.i2 = 8;

	printf("sizeof(struct LONGI)=%d, sizeof(struct FIELDS) = %d\n", \
		sizeof(struct LONGI), sizeof(struct FIELDS));

	printf("var.i.i1 = %u\nf1 = %u\t f2 = %u",\
		var.i.i1, var.f.f1, var.f.f2);

	printf("\t f3 = %u\t f4 = %u\n", var.f.f3, var.f.f4);

	printf("var.i.i2 = %u\nf5 = %u\n", var.i.i2, var.f.f5);
	printf("*******************************************\n");
	var.f.f5 = 7;
	var.f.f1 = 1;
	var.f.f2 = 1;
	var.f.f3 = 1;
	printf("f1 = %u\tf2 = %u\tf3 = %u\tf4 = %u\n",\
		var.f.f1, var.f.f2, var.f.f3, var.f.f4);
	printf("var.i.i1 = %#x\n", var.i.i1);
	printf("f5 = %u\nvar.i.i2 = %#x\n",\
		var.f.f5, var.i.i2);
}

