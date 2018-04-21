/****************************************
 * 		Test2.c			*
 * 	This program tests Odds		*
 *	by using xor 		 	*
 *					*
 *					*
 *	by GNU gcc complier.		*
 *	Wen-Ruey Hwang C book.		*
 ****************************************/
#include <stdio.h>
#include <stdlib.h>
/* Function to return the only odd occuring element */
int findOdd(int arr[], int n)
{
	int res = 0, i;
	for(i=0; i<n; i++)
	{
		res ^= arr[i];
		printf("item = %d and res = %d(%#0x)\n", i, res, res);
	}
	return res;
}

int main()
{
	int arr[] = { 12, 12, 12, 14, 90, 14, 14, 14};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("The odd occurring element is %d\n", findOdd(arr, n));
}
