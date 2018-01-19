/*****************************************
 *		P8_10.c by GUN	 	 *
 * 	The program describes 		 *
 *	the usage of casting 	 	 *
 *	pointer.			 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <string.h>

static struct STOCK_INFO
{
	char co_name[15];
	char date[10];
	int qnty;
	int price;
	char comments[40];
} rec1 =
{
	"IBM_Inc. ",
	"09-03-88 ",
	0100 ,
	0x5A,
	"This_is_a_good_stock..."
};
#define SIZE (sizeof(struct STOCK_INFO))

int main()
{
	int i, j;
	struct STOCK_INFO rec2;
	char *sptr, *tptr;

	sptr = (char *)&rec1;
	tptr = (char *)&rec2;

	for(i=0, j=0; i <SIZE;i++)
	{
		
		if((*tptr = *sptr) != ' ')
			printf("%c>", *tptr);
		else
		{
			if( *sptr == ' ') printf("[]");
			else
			{
				printf("\n");
				j = 0;
			}
		}
		if((++j%15) == 0) printf("\n");
		tptr++;
		sptr++;
	}
	printf("\n");
}
