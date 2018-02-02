/*****************************************
 *		P11_5.c  by GUN 	 *
 * 	The program describes string.h 	 *
 *	strchr() and strrchr()	 *
 *	for searching substring.	 *
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
	const char string[] = \
		" C language for IBM-PC.";
	printf("the string is:%s\n", string);
	printf("the length of string = %d\n", strlen(string));
	printf("the address &string[0] = %p\n", string);
	printf("the first &(g) in %p\n", strchr(string, 'g'));
	printf("the first &(a) in %p\n", strchr(string, 'a'));
	printf("the last &(g) in %p\n", strrchr(string, 'g'));
	printf("the last &(a) in %p\n", strrchr(string, 'a'));
	printf("the NULL in %p\n", strrchr(string, '\0'));
	/* note the strchr() and strrchr() return the address of searching c */

}
