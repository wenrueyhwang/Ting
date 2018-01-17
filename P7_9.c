/*****************************************
 *		P7_9.c by GUN	 	 *
 * 	The program impements		 *
 *	the usage of ternary to 	 *
 *	transfer lower tro upper.	 *
 *	and to learn getchar() & putchar *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

void main()
{
	int c;

	printf("Please input transfer line:\n");
	while( (c = getchar()) != EOF)
	{
		c = (c >= 'a' && c <= 'z') ? c -'a'+'A' : c;
		putchar(c);
	}
}

 			
