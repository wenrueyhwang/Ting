/*****************************************
 *		P8_6.c by GUN	 	 *
 * 	The program describes 		 *
 *	pointer as an argument of a 	 *
 * 	function.			 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
char target[] = "IBM Personal ";

void stringcat(char *tptr, char *sptr);

void main()
{
	stringcat(target, "Computer. ");
	printf("the final string = %s\n", target);
}

/*********** the strcat function ****************/
void stringcat(char *tptr, char *sptr)
{
	while(*tptr != '\0') // to check the end of string tptr.
		printf("tptr = %p ---> *tptr = %c\n", tptr, *tptr++);
		// after the while, the tprt points to the end of string
	while(*sptr != '\0')
	{
		*tptr = *sptr++; // pass the *sptr to *tptr.
		printf("tptr = %p ---> *tptr = %c\n", tptr, *tptr++);
	}
}

 			
