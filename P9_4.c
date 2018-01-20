/*****************************************
 *		P9_4.c by GUN	 	 *
 * 	The program describes 		 *
 *	bitwise operations to do  	 *
 *	bit rotation.			 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <string.h>

unsigned getbits(unsigned x, int p, int n);
unsigned rightrot(unsigned tty, int b);
void printbit(unsigned x);

int main()
{
	unsigned x, y;
	int n, p;

	printf("Please intput a  hexdecimal number:");
	scanf("%x",&x);

	printf("X = B");
	printbit(x);
	printf("How many bits do you need? where n = ");
	scanf("%d", &n);
	printf("From which position to count p =");
	scanf("%d",&p);
	printf("Get %d bits from position %d = %u\n",\
		n, p, getbits(x,p,n));
	printf("How many bits for right rotate n = ");
	scanf("%d", &n);
	y = rightrot(x, n);
	printf("Before right rotate X = B");
	printbit(x);
	printf("After right roatate Y = B");
	printbit(y);
}
unsigned getbits(unsigned x, int p, int n)
{
	x >>= (p+1-n); /* position p and n bits */
	x &= ~(~0 << n); /* filter the n bits */
	return(x);
}
void printbit(unsigned p)
{
	int i;
	unsigned temp;
	for(i=15; i>=0; i--)
	{
		temp = p >> i;
		temp &= 0x01;
		if(i==7) printf("-");
		printf("%1u", temp);
	}
	printf("\n");
}
unsigned rightrot(unsigned tty, int b)
{
	unsigned rbit;
	do
	{
		rbit = tty;
		rbit <<= 15;
		tty >>= 1;
		tty &= 0x7fff;
		tty |= rbit;
		b--;
	} while(b > 0);
	return(tty);
}


