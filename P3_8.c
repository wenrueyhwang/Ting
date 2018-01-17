/*****************************************
 *		P3_8.c by GUN		 *
 * 	The program inputs a line 	 *
 * 	character from the keyboard then *
 *	display the code of ASCII. 	 * 
 *	(decimal, octal and hexdecimal)  *
 *			                 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
void convert(int ch);

int main()
{
	int ch;

	printf("This program produces ASCII character codes\n");
	printf("Enter a line of characters followed by return.\n");

	ch = getchar();
	while(ch != '\n')
	{
		convert(ch); // this file is from module convert.c
		ch = getchar();
	}
	printf("Tne end...\n");
}

