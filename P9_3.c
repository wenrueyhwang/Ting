/*****************************************
 *		P9_3.c by GUN	 	 *
 * 	The program describes 		 *
 *	a serial digital number	 	 *
 *	for parity checking.		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <string.h>

#define MAX 8
#define MASK 0x0000007f;

int main()
{
	int x, x1, x2, x3, x4, temp;
	int i, j, k;
	char y[MAX], c;
	
	j = 0; 	k = 0;

	printf("Please int a hex-code long-type: ");
	scanf("%x", &x);
	
	printf("%x\n", x);
	x4 = x & MASK;
	y[3] = (char)x4;
	x1 = x >> 24; /* to get high-order byte */
	x1 &= MASK;
	y[0] = (char)x1;
	x2 = x >> 16;
	x2 &= MASK;
	y[1] = (char)x2;
	x3 = x >> 8;
	x3 &= MASK;
	y[2] = (char)x3;
	printf("The code is --->\n");
	for(i=31;i>=0;i--)
	{
		temp = x >> i;
		temp &= 0x01;
		printf("%1d", temp);
		if(temp == 1) j++;
		if(i%8==0)
		{
			if(j%2==0) printf("---> %c\n", y[k]);
			else
			printf("===== the error code ====\n");
			k++;
			j = 0;
			printf("\n");
		}
	}
}


