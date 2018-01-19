/*****************************************
 *		P8_7_1.c by GUN	 	 *
 * 	The program describes 		 *
 *	return of pointer as an		 *
 *	argument of a function.		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <string.h>
char *strcopy(char *tptr, char*sptr);

void main()
{
	char target[100], *cptr;

	cptr = strcopy(target, "IBM Inc. ");
	cptr = strcopy(cptr, "PERSONAL ");
	cptr = strcopy(cptr, "COMPUTER.");
	printf("%s\n", target);
}
char *strcopy(char *tptr, char *sptr)
{
	while(*tptr++ = *sptr++);
	return(--tptr);
}

 			
