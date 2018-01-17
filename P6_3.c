/*****************************************
 *		P6_3.c by GUN	 	 *
 * 	The program shows 		 *
 *	if --- else statement:  	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	int x, y;
	char index;

	while(1)
	{
	printf("Please Input two numbers: ");
	scanf("%d %d", &x, &y);
	getchar();

	if(x > y)
		printf("THE LARGEST NUMBER IS %d", x);
	else if(x == y)
		printf("THE TWO NUMBERS ARE EQUAL");
	else 
		printf("THE LARGEST NUMBER IS %d", y);
	printf("\n");
	printf("Do you want to try again(y/n)?");
	scanf("%c",&index);
	if(index == 'n') break;
	}
}



