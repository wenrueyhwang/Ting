/*****************************************
 *		P8_0.c by GUN	 	 *
 * 	The program impements		 *
 *	the usage of pointer	 	 *
 *	to append a string to other	 *
 *	string				 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

char source[] = "Compter";
char target[] = "IBM Personal ";

void main()
{
	char *sptr = source; 	// sptr points to source
	char *tptr = target; 	// tptr points to target

	printf("the source :\t%s\n", source);
	printf("the target :\t%s\n", target);

	while(*tptr != '\0') tptr++; 	// to find the end of target string
	while((*tptr = *sptr) != '\0')	// copy *sptr to *tptr
	{
		tptr++;
		sptr++;
	}
	printf("the result is : %s\n", target);
}

 			
