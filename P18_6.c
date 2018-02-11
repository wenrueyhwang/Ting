/****************************************
 * 		P18_6.c			*
 * 	This program uses graphics.h	*
 *	to get line(), rectangle() and 	*
 *	bar().				*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <math.h>
#include <graphics.h>

int main()
{
	int driver = DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	int i, j;

	for(i=100; i<175; i+=25)
		bar(i, i, i+25, i+25);
	for(j=i ;j<225; j+=25)
		rectangle(j, j, j+25, j+25);
	line(j, j, j+125, j+125);
	getchar();
	closegraph();
/**************************************************/
}

