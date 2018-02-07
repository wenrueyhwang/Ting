/*****************************************
 *		P15_3.c  by GUN 	 *
 * 	this program test the quicksort	 *
 * 	by using the pointer of function *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change(int*, int*);
int test(int*, int*);
void quick_sort(int*, int*, int, void(*)(), int(*)());

int a[] = {10, 4, 2, 14, 67, 2, 11, 33, 1, 15};

int main()
{
	int i, j;
	printf("The Initial order is :\n");
	printf("\t  ");
	for(j = 0; j<10; j++)
		printf("%3d,", a[j]);
	printf("\n------> Start to sort.\n");
	quick_sort(&a[0], &a[9], 1, change, test);
	printf("\n ***** THE SORTED ARRAY IS :\n");
	for(i=0; i<10 ;i++)
		printf("%3d, ", a[i]);
	printf("\n");
}
void change(int *x, int *y)
{
	int temp;
	static int count = 1;

	temp = *x;
	*x = *y;
	*y = temp;

	printf("\n");
	printf("No. (%2d) CHANGE", count++);
	for(temp = 0; temp < 10; temp++)
		printf("%3d,", a[temp]);
}
int test(int *x, int *y)
{
	return(*x - *y);
}
void quick_sort(int* first, int* last, int size, void(*change)(), int(*test)())
{
	int *pivot;
	int *left;
	int *right;

	if(first < last)
	{
		pivot = first;
		left = first + size;
		right = last;
		do
		{
			while((left <= right) && (*test)(left, pivot) <= 0)
				left += size;
			while((right >= left) && (*test)(right, pivot) >=0)
				right -= size;
			if(left < right) (*change)(left, right);
		} while(right >= left);
	(*change)(pivot, right);
 	quick_sort(first, right-size, size, change, test);
	quick_sort(right+size, last, size, change, test);
	}
}

