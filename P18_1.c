/****************************************
 * 	This program uses detectgraph	*
 *	to find out the 	 	*
 *	driver and mode of the system	*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
	int driver=DETECT, mode;
	initgraph(&driver, &mode, NULL);
	detectgraph(&driver, &mode);

	if(driver < 0)
	{
		printf("System can not use graphics.\n");
		exit(-1);
	}
	printf(" the graphic driver is = %d\n", driver);
	printf(" the graphic mode is = %d\n", mode);
	printf(" the getmaxx() = %d, getmaxy() = %d\n", getmaxx(), getmaxy());
	getchar();
	closegraph();
}

