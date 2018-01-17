/*****************************************
 *		P7_6.c by GUN	 	 *
 * 	The program impements		 *
 *	binary operator usage.		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#define YES	1
#define NO	0
#define MAX	10

void main()
{
	char digit[MAX], test;
	int hexdigit, i, j, index;
	unsigned n;

	index = YES;
	test = 'y';
	while(test == 'y' || test == 'Y')
	{
		index = YES;
		n = 0;
		printf("Please input a hexdicimal: ");
		scanf("%s", digit);
		getchar();
		/* i = 0;
		printf("The input string is: ");
		while(1)
		{
			
			if(digit[i] != '\0') printf("%c ", digit[i++]);
			else break;
		}
		*/
		for(i=0;index == YES;i++)
		{
			// printf("digit[%d] = %c \n", i, digit[i]);
			if(digit[i] >= '0' && digit[i] <= '9')
				hexdigit = digit[i] - '0';
			else if(digit[i] >= 'a' && digit[i] <= 'f')
				hexdigit = digit[i] - 'a' + 10;
			else if(digit[i] >= 'A' && digit[i] <= 'F')
				hexdigit = digit[i] - 'A' + 10;
			else index = NO;

			// printf("hexdigit = %d\n", hexdigit);
			if(index == YES) n = 16*n + hexdigit;
			// printf("the n = %u\n", n);
		}
		// printf("digit[%d] = %c\n", i+1, digit[i+1]);
		if(digit[i-1] == '\0')
			printf("the equal decimal is  ***** %u\n", n);
		else  	printf("this is an error hexdigit ****\n");
		printf("Do you want to get next one(y/n)?");
		test = getchar();
		getchar(); /* this getchar is for return. */
	}
}

 			
