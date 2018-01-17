/*****************************************
 *		P7_8.c by GUN	 	 *
 * 	The program impements		 *
 *	to find out the GCD and LCM	 *
 *	of two number.			 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

void main()
{
	long a, b, x, y;
	long gcd, lcm;

	printf("Please input two numbers:");
	scanf("%ld %ld",&x, &y);
	
	a = x;
	b = y;
	while( a!= b)
	{
		while(a > b) a -= b;
		while(b > a) b -= a;
	}
	gcd = a;
	lcm = (x*y)/a;
	printf("GCD of (%ld , %ld) = %ld\n", x, y, gcd);
	printf("LCM of (%ld , %ld) = %ld\n", x, y, lcm);
}

 			
