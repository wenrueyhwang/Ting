/* file slop.c */
#include <stdio.h>
#include "defines.h"
#include <stdlib.h>
#include <ctype.h>

#define ENTRIES 100

typedef struct
{
	BYTE x, y;
	int slope;
} Entry;

void main()
{
	Entry inputs[ENTRIES];
	int i=0, j;
	char data[10];

	while(i < ENTRIES)
	{
		printf("Enter a point value x, y\n");
		printf("x=");
		scanf("%s", data);
		inputs[i].x = atoi(data);
		printf("y=");
		scanf("%s", data);
		if(isdigit(data[0]))
			inputs[i++].y=atoi(data);
		else
			break;
	}
	for(j=0;j<i-1;j++)
	{
		inputs[j].slope=0x100*( \
			(signed long)((WORD)inputs[j+1].y) - \
			(signed long)((WORD)inputs[j].y))/( \
			(signed long)((WORD)inputs[j+1].x)- \
			(signed long)((WORD)inputs[j].x));

		printf("\t%d\t%d\t0x%x\n", inputs[j].x, inputs[j].y, \
			inputs[j].slope);
	}

}

