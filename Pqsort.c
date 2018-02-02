/*****************************************
 *		Pqsort.c by GUN 	 *
 * 	The program describes stdlib 	 *
 *	for number transform  	  	 *
 * 	void qsort(base, nbase, nbyte	 *
 *	, compar)			 * 
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int values[] = { 0, -100, 20, 250, 60, 10, 85, 66, -75, 100, -25, 7, 70};

int cmpfunc(const void *a, const void *b);

int main()
{
	int n,i;
	int *item;
	int key ;	

	printf("Before sorting the list is:\n");
	n = sizeof(values)/sizeof(int);

	for(i=0; i<n; i++)
		printf("%3d   ", values[i]);
	printf("\n");
/*****************************************/
	qsort(values, n,sizeof(int),cmpfunc);

	printf("After sorting the list is:\n");
	for(i=0; i<n; i++)
		printf("%3d   ", values[i]);
	printf("\n");

	printf("Please input the key to find in the sorted list: ");
	scanf("%d", &key);
	item = (int*)bsearch(&key, values, n, sizeof(int), cmpfunc);
	if(item != NULL) printf("found item = %d\n", *item);
	else printf("item = %d could not be found.\n", key); 
}
int cmpfunc(const void *a, const void *b)
{
	return(*(int*)a - *(int*)b);
}
 
