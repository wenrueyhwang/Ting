/*****************************************
 *		P11_10.c  by GUN 	 *
 * 	The program describes ctype.h 	 *
 *	character MACROS		 *
 *	itoa() and ltoa() 	  	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>

char * itoa(int, char*, int);

int main()
{
	int i;
	int base1 = 16;
	int base2 = 10;
	int value1 = -122;
	int value2 = -344533;
	char *p1, *p2;
	char buffer1[30], buffer2[30];


	p1 = itoa(value1, buffer1, base2);
	printf("the ITOA(%d) = %s(10)\n", value1, p1);

}
char* itoa(int value, char buffer[], int base)
{
	static char buf[30]; /* this is needed to setup in static */
	char *cp;
	char ch;
	int i, len, hex;

	cp = buffer;
	if(value < 0)
	{
		value = -value;
		*cp++ = '-';
	}
	else *cp++ = '+';

	while(value >= base)
	{
		ch =(char)((value%base) + 48);
		value = (int)(value/base);
		*cp++ = ch;
	}
	*cp = (char)(value+48);
	len = strlen(buffer);
	buf[0] = buffer[0];

	for(i=1; i<len; i++)
	{
		buf[i] = *cp--;
	}

	return buf;
}
