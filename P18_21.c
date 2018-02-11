/****************************************
 * 		P18_21.c		*
 * 	This program uses graphics.h	*
 *	to get the mode range	 	*
 *					*
 *					*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

#define DY delay(1000)

int main()
{
	int d=DETECT, m;
	initgraph(&d, &m, NULL);
/**************************************************/
	int firstmode, lastmode;
	int i;


	char *driver []={"DETECT", "CGA", "MCGA", "EGA", "EGA64",\
		"EGAMONO", "IBM8514", "HERCMONO","ATT400", "VGA","PC3270"};
	for(i=0; i<11; i++)
	{
		getmoderange(i, &firstmode, &lastmode);
		printf("%10s supports modes %d through",\
			driver[i], firstmode);
		printf("  %d\n", lastmode);
	}
	printf("The current drivername = %s\n", getdrivername());
	printf("The current modename = %s \n", getmodename(1));
	printf("The size of (%d X %d)\n", getmaxx(), getmaxy());
	getch();
	closegraph();
}
