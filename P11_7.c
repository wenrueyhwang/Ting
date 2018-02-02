/*****************************************
 *		P11_7.c  by GUN 	 *
 * 	The program describes ctype.h 	 *
 *	character MACROS		 *
 *	isprint, iscntrl, isdigit, ...   *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>


int main()
{
	int ch, i = 1;
	for(ch = 0; ch<= 0x7f; ch++)
	{
		printf("%#04x", ch);
		printf("[%1c]", isprint(ch) ? ch : '\0');
		printf("%s", iscntrl(ch) ? " C" : "");
		printf("%s", isdigit(ch) ? " D" : "");
		printf("%s", isgraph(ch) ? " G" : "");
		printf("%s", islower(ch) ? " L" : "");
		printf("%s", ispunct(ch) ? " PU": "");
		printf("%s", isspace(ch) ? " S" : "");
		printf("%s", isupper(ch) ? " U" : "");
		printf("%s", isxdigit(ch) ? " X": "");
		if((i++%3)==0) putchar('\n');
		else putchar('\t');
	}
	putchar('\n');
}
