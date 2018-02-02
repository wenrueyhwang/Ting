/*****************************************
 *		P11_1.c  by GUN 	 *
 * 	The program describes string.h 	 *
 *	strcpy() and strncpy()		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>


int main()
{
	char str1[30], str2[30], str3[30];
	char *np;

	int n = 20;

	strcpy(str1, "This is my first book C.");
	printf("the copy string is :\n");
	printf("%s\n", str1);

	np = strncpy(str2, str1, n); /* copy 15 characters to str2 */

	strcpy(str3, str2);

	if(strcmp(str2, str3) == 0) printf("str2 == str3\n");
	printf("%s\n", np);
	printf("%s\n", str3);

}
