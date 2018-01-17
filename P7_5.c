/*****************************************
 *		P7_5.c by GUN	 	 *
 * 	The program impements		 *
 *	Unary operator usage.		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#define MAX 10

void main()
{
	int x, y, z;
	int i, j, k, a[MAX];
	char c, d;
	float f,g;
	int l, m;

	/* initial value setting */
	c = 'A';
	i = 0;
	j = 5;
	x = 100;
	y = -x;
	z = 353;

/* to implement parameters value: */
	printf("the x = %d and y = -x = %d\n", x, y);
	if(!(x==y)) printf("the logical inverse \n");
/* to distinguish the difference of pre-add anf post-add */	
	a[i++] = 5000;
	a[++j] = 6000;
	printf("the i = %d a[%d] = %d\n", i, i-1, a[i-1]);
	printf("the j = %d a[%d] = %d\n", j, j, a[j]);
/* to find out the data type size by using sizeof() */
	printf("length of char = %d\n", sizeof(char));
	printf("length of int = %d\n", sizeof(int));
	printf("length of unsigned = %d\n", sizeof(unsigned));
	printf("length of short = %d\n", sizeof(short));
	printf("length of long = %d\n", sizeof(long));
	printf("length of float = %d\n", sizeof(float));
	printf("length of double = %d\n", sizeof(double));
/* data type casting (datatype)par */
	k = (int)c;
	printf("c = %c ---> k = (int)c = %d\n", c, k);
	d = (char)z;
	printf("z = %d ---> d = (char)z = %c\n", z, d);
	f = 10.25; l = 25;
	m = (int)f; g = (float)l;
	printf("the f = %f ---> m = (int)f = %d\n", f, m);
	printf("the l = %d ---> g = (float)l = %f\n", l, g);
}
 			
