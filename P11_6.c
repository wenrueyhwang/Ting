/*****************************************
 *		P11_6.c  by GUN 	 *
 * 	The program describes ctype.h 	 *
 *	character MACROS		 *
 *	isalnum(),isalpha(),isascii()... *
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
		printf("%#04X ", ch);
		printf("%c", isprint(ch) ? ch : ' ');
		printf("%3s", isalnum(ch) ? "AN" : "");
		printf("%2s", isalpha(ch) ? "A" : "");
		printf("%3s", isascii(ch) ? "AS" : "");
		if(i++%4 == 0) printf("\n");
		else printf("\t");
	}
	printf("\n");
}
