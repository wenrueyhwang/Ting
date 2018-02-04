/*****************************************
 *		P14_2.c  by GUN 	 *
 * 	The program describes 	 	 *
 *	enumerated data type usage 	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include "ansi.h"

void display(char);
void menu();

enum spectrum
	{ red, orange, yellow, green, blue, violt, end };

enum spectrum color;

int main()
{
	menu();
	while( color != end)
	{
		switch(color)
		{
			case red:
				display(red + 82);
				break;
			case orange:
				display(orange + 78);
				break;
			case yellow:
				display(yellow + 87);
				break;
			case green:
				display(green + 68);
				break;
			case blue:
				display(blue + 62);
				break;
			case violt:
				display(violt + 81);
				break;
		}
		CUP(13,17);
		EL;
		printf("Please input return ....");
		getchar();
		menu();
	}
	CUP(0,0);
	ED;

}

void menu()
{
	ED;
	CUP(0,0);
	printf("\n");
	printf("\t\t*******************************************\n");
	printf("\t\t***		0---> red\t\t***\n");
	printf("\t\t***		1---> orange\t\t***\n");
	printf("\t\t***		2---> yellow\t\t***\n");
	printf("\t\t***		3---> green\t\t***\n");
	printf("\t\t***		4---> blue\t\t***\n");
	printf("\t\t***		5---> violt\t\t***\n");
	printf("\t\t***		6---> end\t\t***\n");
	printf("\t\t*******************************************\n");
	printf("\t\tPlease input (0-6) which one >?");
	scanf("%u", &color);
	getchar(); /* THIS IS FOR RETURN */
	return;
}
void display(char ch)
{
	printf("\t\tdisplay the inputed[%c]\n", ch);
}

