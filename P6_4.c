/*****************************************
 *		P6_4.c by GUN	 	 *
 * 	The program shows(while loop)	 *
 *	computes the sum of even number  *
 *	from 0 through the last		 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	int even = 0, sum = 0;
	int last;
	char index;

while(1)
{
	printf("Please Input a number called last: ");
	scanf("%d", &last);
	getchar();

	while(even <= last)
	{
		sum += even;
		even += 2;
		printf("%d\t", sum);
	}
	printf("Sum of the even number from 0 to ");
	printf("%d = %d\n", last, sum);
	printf("\n");
	printf("Do you want to try again(y/n)?");
	scanf("%c",&index);
	if(index == 'n') break;
	even = 0;
	sum = 0;
}
}



