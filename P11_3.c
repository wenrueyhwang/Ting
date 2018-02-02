/*****************************************
 *		P11_3.c  by GUN 	 *
 * 	The program describes string.h 	 *
 *	strcmp() and strncmp()		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#define min(x,y) (x > y)?y:x

int main()
{
	const char str1[] = "hello";
	const char str2[] = "zello";
	const char str3[] = "hello there";
	int x1, x2, n;
	x1 = strlen(str1);
	x2 = strlen(str3);
	n = min(x1,x2);

	printf("the str1:%s - str1:%s = %d\n",\
		str1, str1,strcmp(str1,str1));
	printf("the str2:%s - str1:%s = %d\n",\
		str2, str1, strcmp(str2, str1));
	printf("the str1:%s - str3:%s = %d\n",\
		str1, str3, strcmp(str1, str3));
	printf("the str1(%d):%s - Str3(%d):%s = %d\n",\
		n,str1, n, str3, strncmp(str1, str3, n));
}
