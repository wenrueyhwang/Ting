/*****************************************
 *		P15_2.c  by GUN 	 *
 * 	this program converts integer	 *
 * 	to ASCII and store the result	 *
 *	in the given character array.	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *_p; /*global static variable */

void itoasc(int, char*);
void int_asc(int);

int main()
{
	char line[15];

	printf("\tCall\t\tn\trem\t _p\n");
	itoasc(-1245, line);
	printf("the ASCII String is :");
	printf("------> %s\n", line);
}
void itoasc(int n, char *p)
{
	printf("itoa(%d, line)\t%d\t\tline+1\n",n,n);
	_p = p;
	if(n == 0) *_p++ = '0';
	else if(n < 0)
	{
		*_p++ = '-';
		int_asc(-n);
	}
	else int_asc(n);
	*_p = '\0';
}
void int_asc(int n)
{
	int rem;

	rem = n % 10;
	printf("int_asc(%d)\t\t%d\t%d\tline+1\n", n, n, rem);
	if((n/10) > 0) int_asc(n/10); /* using recursive function */

	if(n == 1)
	{
		printf("***** The return value is  : \n");
		printf("\tn   \t\trem \n");
	}
	*_p ++ = rem + '0'; /* _p is a char pointer */
	printf("\t%d\t\t%d\n", n, rem);
}

