/*****************************************
 *		P15_4.c  by GUN 	 *
 * 	this program test the Hanoi tower*
 * 	by using the recursive function  *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tower(int , char, char, char);

int main()
{
	int m;
	char c;

	do {
	printf("Please input dish number:");
	scanf("%d", &m);
	getchar();
	printf("\nN = %2d\n",m);
	tower(m, 'A','B','C');
	printf("Do you want to display again ?");
	printf("(Y/N) Please keh in_");
	c = getchar();
	} while( (c == 'y') || (c == 'Y'));
}
void tower(int n, char froma, char tob, char byc)
{
	int p;
	if(n>0)
	{
		p = n--;
		printf("number p = %d and n = %d\n", p,n);
		tower(n, froma, byc, tob);
		printf("Move Disk %d from %c  ===> to %c\n", p, froma, tob);
		tower(n, byc, tob, froma);
		printf("number p = %d and n = %d\n", p, n);
	}
}

