/*****************************************
 *		limit.c by GUN	 	 *
 * 	The program describes 		 *
 *	limiwt.h that shows constants  	 *
 * 	CHAR_BIT, SCHAR_MAX ...		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <stdlib.h>	/* this is for exit() */
#include <fcntl.h>	/* this is for O_RDONLY, O_WRONLY... */
#include <limits.h>

int main()
{
	printf("The number of bit in a byte = %d\n", CHAR_BIT);
	printf("The minimum value of signed char = %d\n", SCHAR_MIN);
	printf("The maximum value of signed char = %d\n", SCHAR_MAX);
	printf("The maximum value of unsigned char = %d\n", UCHAR_MAX);
	
	printf("The minimum value of short int = %d\n", SHRT_MIN);
	printf("The maximum value of short int = %d\n", SHRT_MAX);

	printf("The minimum value of int = %d\n", INT_MIN);
	printf("The maximum value of int = %d\n", INT_MAX);

	printf("The minimum value of char = %d\n", CHAR_MIN);
	printf("The maximum value of char = %d\n", CHAR_MAX);

	printf("The minimum value of long = %ld\n", LONG_MIN);
	printf("The maximum value of long = %ld\n", LONG_MAX);

	printf("The number of bit in an int = %d\n", sizeof(int));
	printf("The number of bit in a long = %d\n", sizeof(long));
}


