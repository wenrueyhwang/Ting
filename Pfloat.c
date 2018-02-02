/*****************************************
 *		Pfloat.c by GUN	 	 *
 * 	The program describes 		 *
 *	limiwt.h that shows constants  	 *
 * 	FLT_MIN, FLT_MAX		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <stdlib.h>	/* this is for exit() */
#include <fcntl.h>	/* this is for O_RDONLY, O_WRONLY... */
#include <limits.h>
#include <float.h>


int main()
{
	printf("Storage size of float = %d\n", sizeof(float));
	printf("Storage size of double = %d\n", sizeof(double));
	printf("Storage size of long float = %d\n", sizeof(long double));
	printf("The minimum value of float = %e\n", FLT_MIN);
	printf("The maximum value of float = %e\n", FLT_MAX);
	printf("Precision value = %d\n", FLT_DIG);
	printf("Precision value = %d\n", DBL_DIG);
	printf("\u02C0");
}
