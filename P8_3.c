/*****************************************
 *		P8_3.c by GUN	 	 *
 * 	The program summerizes		 *
 *	the detail pointers.	 	 *
 *					 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

void main()
{
	int alpha, *beta, i, *ptr1, *ptr2;
	static int test[] = {1, 2, 3, 4, 5};

	alpha = 100;
	beta = &alpha;
	ptr1 = test;
	ptr2 = &test[3];

	printf("the value %d is stored at address %p\n", \
			alpha, beta);
	printf("the value %p is stored at address %p\n", \
			beta, &beta);
	printf("the content of %p is ---> %p\n", &beta, beta);
	printf("the content of %p is ---> %d\n", beta, *beta);

	*beta = 500;

	printf("if *beta = 500 then address(%p) = %d\n", beta, alpha); 
	printf("***************************************************\n\n");
	printf("============  &ptr1 = %p  =========================\n", &ptr1);
	for(i=0; i<3; i++)
		printf("the address(%p) ---> test[%d] = %d\n", \
			ptr1++, i, *ptr1);
	printf("============  &ptr2 = %p =========================\n", &ptr2);
	for(i=3; i<5; i++)
		printf("the aaddress(%p) --> test[%d] = %d\n", \
			ptr2++, i, *ptr2);

}

 			
