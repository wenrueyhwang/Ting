/*****************************************
 *		P11_4.c  by GUN 	 *
 * 	The program describes string.h 	 *
 *	strcat() and strncat()		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

char target[80];

int main()
{
	strcat(target, "This is ");
	printf("%s\n", target);
	strcat(target, "a truncated statememt: ");
	printf("%s\n", target);
	strncat(target, target, 20);
	printf("%s\n", target);
}
