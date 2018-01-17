/*****************************************
 *		P6_2.c by GUN	 	 *
 * 	The program shows if statement:  *
 * 	for example:		  	 *
 *	10 kilos 400 grams		 *
 *	50 kilos 800 grams		 *
 *	------------------		 *
 * 	61 kilos 200 grams		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	int k1, k2, g1, g2, ks, gs;
	printf("Please Input data: ");
	scanf("%d %d %d %d", &k1, &g1, &k2, &g2);
	
	ks = k1 + k2;
	gs = g1 + g2;
	if(gs >= 1000)
	{
		ks += 1;
		gs -=1000;
	}
	printf("FIRST WEIGHT\t = ");
	printf("%d kilos %d grams\n", k1, g1);
	printf("SECOND WEIGHT\t = ");
	printf("%d kilos %d grams\n", k2, g2);
	printf("TOTAL WEIGHT\t = ");
	printf("%d kilos %d grams\n", ks, gs);
}



