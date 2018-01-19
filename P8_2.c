/*****************************************
 *		P8_2.c by GUN	 	 *
 * 	The program impements		 *
 *	the pointer arithematic	 	 *
 *					 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <math.h>

void main()
{
	static int array[3][3] = {	\
		{ 100, 200, 300 },	\
		{ 400, 500, 600 },	\
		{ 700, 800, 900 } };
	int  *ptr, i, j, k;

	int size = sqrt(sizeof(array)/sizeof(int));
	printf("%d , %d , %d\n", sizeof(array), sizeof(int), size);
	
	ptr = &array[0][0];

	printf("********** &ptr = %p ************\n", &ptr);
	for(i=0; i< (size*size); i++)
		printf("ptr+%d = %p, \t\t*(ptr+%d)=%d\n", \
		i, ptr++, i, *ptr);
	printf("********************************\n");
	ptr = &array[0][0];

	for(j=0; j<size; j++)
		for(k=0; k<size; k++)
			printf("&array[%d][%d]=%p, \tarray[%d][%d]=%d\n", \
				j,k, &array[j][k], j, k, *ptr++);
	printf("\n");
}

 			
