/*****************************************
 *		P10_4.c by GUN	 	 *
 * 	The program describes 		 *
 *	internal memory data 	 	 *
 *	sprintf(), sscanf(), 		 *
 *	printf() and scanf().		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c = 'a', achar;
	char buf[72], string[46];
	static char str[] = "how now";
	static char ptr[] = "12345678901234";
	int byte, aint, i = 123;
	float x = -123.456789, afloat;
/************** usge of sprintf()  *************/
/*** to input a format string into the memory buf ***/
	byte = sprintf(buf, ":%c:%s:%3d:%10f:%12e:\n",\
		c, str, i, x, x);
	printf("The function sprintf() transfers ");
	printf("value to character string ===>>\n");
	printf("buffer space used = %d\n", 1+byte);
	puts(buf);
	printf("%s", buf);
/************ usage of sscanf()  ***************/
/**** from string memory split to varialbes ***/
	sscanf(ptr, "%c%3d%*2d%6s%2f", &achar, &aint, string, &afloat);
	printf("The function sscanf() transfers ");
	printf(" character string to value ==>>\n");
	printf("the string is %s\n", ptr);
	printf("char = %c---int=%d---string=%s---float=%f\n",\
		achar, aint, string, afloat);
}
