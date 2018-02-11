/****************************************
 * 		P18_18.c		*
 * 	This program uses graphics.h	*
 *	to change the display character *
 *	size of the series words. 	*
 *					*
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
	int driver = DETECT, mode;
	initgraph(&driver, &mode, NULL);
/**************************************************/
	char name[] = "My name is Hwang, Wen-Ruey.";
	char fname[] = "Mr. Hwang.";

/*	settextstyle(4, 0, 0);
	settextjustify(0, 0);*/ 
	outtextxy(200, 100, name);
/*	settestjustify(1, 2);
	setusercharsize(1,1, 3, 1); */
	setlinestyle(3, 1, 0); 
 	moveto(200, 100);
	outtext(fname);
/*	settextjustify(2, 0);
	setusercharsize(1, 2, 2, 1); */
	setlinestyle(4, 0, 0); 
	outtextxy(200, 100, name);

	getch();
	closegraph();
}
