/****************************************
 * 		P18_19.c		*
 * 	This program uses graphics.h	*
 *	to have the display character 	*
 *	size of height and width. 	*
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
	int height[3],width[3], count = 0, len;
	int i;
 
	char name1[] = "<1>My name is Hwang, Wen-Ruey.";
	char name2[] = "<2>My name is Hwang, Wen-Ruey.";
	char name3[] = "<3>My name is Hwang, Wen-Ruey.";

/** The first size **/
	height[count] = textheight(name1);
	width[count++] = textwidth(name1);
	setfontcolor(RED);
	outtextxy(300, 100, name1);
/** The second size **/
	height[count] = textheight(name2);
	width[count++] = textwidth(name2);
	moveto(400, 200);
	setfontcolor(BLUE);
	outtext(name2);
/** The third size **/
	height[count] = textheight(name3);
	width[count++] = textwidth(name3);
	setfontcolor(GREEN);
	outtextxy(200, 300, name3);
	getch();
	closegraph();
	len = strlen(name1);
	for(i=0; i<count; i++)
	{
		printf("The character height is %d\n", height[i]);
		printf("The character width is %d\n", width[i]);
	}
}
