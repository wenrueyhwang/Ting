/*****************************************
 * 		P3_5_2.c		 *
 * 	Exercise to find out what happens*
 *	when printf's argument string is *
 *	escape sequence or number        *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	printf("hello, C language\x0atest function\n");
	printf("hello, C language\x08test function\n");
	printf("hello, C language\015test function\n");
	printf("hello, C language\07<bell>test function\n");
	printf("hello, C language\\WWtest function\n");
	printf("hello, C language\\??test function\n");
	printf("hello, C language\\&&test function\n");
	
}

