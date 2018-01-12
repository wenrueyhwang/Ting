/*****************************************
 * 		P3_5_1.c		 *
 * 	Exercise to find out what happens*
 *	when printf's argument string is *
 *	escape sequence or not *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	printf("\\nhello, C language\ntest function\n");
	printf("\\rhello, C language\rtest function\n");
	printf("\\thello, C language\ttest function\n");
	printf("\\bhello, C language\btest function\n");
	printf("\\fhello, C language\ftest function\n");
	printf("\\hello, C language\\test function\n");
	printf("\'hello, C language\'test function\n");
	printf("\"hello, C language\"test function\n");
	
}

