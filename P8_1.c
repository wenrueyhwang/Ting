/*****************************************
 *		P8_1.c by GUN	 	 *
 * 	The program impements		 *
 *	the usage of pointer	 	 *
 *	array[] and pointer		 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

void main()
{
	static double farray[] = { 12.34, 23.45, 56.78 };
	int i;
	double* fptr = farray;

	int size = sizeof(farray)/sizeof(double);

	printf("farray = %p,\t fptr = %p,\t &farray[0] = %p\n", \
		farray, fptr, &farray[0]);
	fptr++;
	printf("farray+1 = %p,\t fptr++ = %p,\t &farray[1] = %p\n", \
		farray+1, fptr, &farray[1]);
	fptr++;
	printf("farray+2 = %p,\t fptr++ = %p,\t &farray[2] = %p\n", \
		farray+2, fptr, &farray[2]);

	printf("*****************************************************\n");
	fptr = farray;

	for(i = 0; i < size; i++)
	{
		printf("&fptr = %p,\t fptr = %p,\t *fptr = %.3f\n", \
			&fptr, fptr, *fptr);
		fptr++;
	}
} 

 			
