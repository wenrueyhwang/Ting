/*****************************************
 *		P11_15.c  by GUN 	 *
 * 	The program describes stdlib.h 	 *
 *	qsort() to quick-sort an int	 *
 * 	file data:			 *
 * 	qsort(array, count, sizeof(int), *
 * 	compare)			 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_SORT 1000

int array[MAX_SORT];
int count;
int compare();

int main(int argc, char* argv[])
{

	int i;
	FILE *fp;

	if(argc < 2)
	{
		printf("Syntax form Error:\n");
		exit(-1);
	}
	if((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("File %s is not found.\n", argv[1]);
		exit(-1);
	}
	for(count = 0; count < MAX_SORT && \
		fscanf(fp, "%d", &array[count]) != EOF ; count++);
	fclose(fp);

	for(i = 0; i<count; i++)
		printf("the data number[%d] = %d\n", i, array[i]);
	printf("**** The sorted data number is: ****\n");
	qsort(array, count, sizeof(int), compare);
	/* after sorting, store data to the file using fprintf() */
	for(i=0; i<count; i++)
		printf("the data number[%d] = %d\n", i, array[i]);
	fp = fopen(argv[2], "w");
	for(i=0; i<count; i++)
		fprintf(fp, "%d\n", array[i]);
	fclose(fp);
}

int compare(int *p1, int *p2)
{
	return(*p1 - *p2);
}
