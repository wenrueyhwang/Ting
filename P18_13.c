/****************************************
 * 		P18_13.c		*
 * 	This program uses graphics.h	*
 *	to use setfillpattern 		*
 *	for getting			*
 *	the function information.	*
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
	int color = 1;
	char user_pattern1[] = { 0x11, 0x22, 0x33,\
		0x44, 0x55, 0x66, 0x77, 0x88};
	char user_pattern2[] = { 0x31, 0xaf, \
		0x59, 0xfa, 0xbb, 0xcd, 0x12, 0x31};
	char user_pattern3[] = { 'A', 'B', 'C', 'D',\
		'E', 'F','G','H'};

	setfillpattern(user_pattern1, color);
	bar(0, 100,100, 200);
	setfillpattern(user_pattern2, color);
	bar(150, 100, 250, 200);
	setfillpattern(user_pattern3, color);
	bar(300, 100, 400, 200);

	getchar();
	closegraph();

}
