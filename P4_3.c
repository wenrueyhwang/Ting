/*****************************************
 *		P4_3.c by GUN	 	 *
 * 	The program sorts the input data *
 * 	of array by bubble sorting	 *
 *			                 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	int n;
	int i, k, t;
	int a[20];

	printf("Enter in numberof input elements: \n");
	scanf("%d", &n);

	printf("Key in array data:\n");
	for(i=0; i<n;i++) scanf("%d", &a[i]);

	for(k=n-2; k>0; k--)
		for(i=0;i<=k;i++)
			if(a[i] > a[i+1])
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
	for(i=0; i< n; i++) printf("%d   ", a[i]);
	printf("\n");
}


