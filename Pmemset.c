/*****************************************
 *		Pmemset.c  by GUN 	 *
 * 	Program shows how to use memset()*
 * void *memset(void *ptr, int x, size)	 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[50] = "Hwang, Wen-Ruey is a good C programmer.\n";
	printf("\nBefore memset(): %s\n", str);

	/* Fill 8 character starting from str(13) */
	memset(str + 13, '*', 8*sizeof(char));

	printf("\nAfter memset(): %s\n", str);
}

