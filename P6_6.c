/*****************************************
 *		P6_6.c by GUN	 	 *
 * 	The program shows		 *
 *	(switch --- case)		 *
 *	implements 10 times to check 	 *
 *	the inputed value and switch to  *
 *	case conditions.		 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	int x;
	while(1)
	{
		printf("The input integer X = ");
		scanf("%d", &x);
		switch(x)
		{
			case 1:
				printf("\tX is ONE.\n");
				break;
			case 2:
				printf("\tX is TWO.\n");
				break;
			case 3: 
				printf("\tX is THREE.\n");
				break;
			case 4: 
				printf("\tX is FOUR.\n");
				break;
			case 5:
				printf("\tX is FIVE.\n");
				break;
			case 6: 
				printf("\tX is SIX.\n");
				break;
			case 7: 
				printf("\tX is SEVEN.\n");
				break;
			case 8:
				printf("\tX is EIGHT.\n");
				break;
			case 9: 
				printf("\tX is NINE.\n");
				break;
			case 10:
				printf("\tX is TEN.\n");
				break;
			default:
				printf("\tX is not between 1 and 10.\n");
		}
		printf("*** THE END.. ***\n\n");
		if(x>10) break;
	}
}

	


