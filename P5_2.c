/*****************************************
 *		P5_2.c by GUN	 	 *
 * 	The program explains: 	 	 *
 * 	#define and #include		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include "ansi.h"

#define BEEPER "\007"
#define BEGIN {
#define END }
#define var
#define WRITELN printf("\n")
#define WRITE printf

void drawbeeper()
BEGIN
	WRITE("\t\t  O  \t\t\n");
	WRITE("\t\t  :  \t\t\n");
	WRITE("\t\t<< >>\t\t\n");
	WRITE(BEEPER);
END

int main()
BEGIN
	int i, max = 5;

	for(i=1;i<=max;i++)
	BEGIN
		drawbeeper();
		WRITELN;
		WRITE("\t\t index equal = %5d", i);
		WRITELN;
	END
END
