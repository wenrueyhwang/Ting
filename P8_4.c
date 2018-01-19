/*****************************************
 *		P8_4.c by GUN	 	 *
 * 	The program discusses		 *
 *	structure pointer.	 	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
struct STOCK_INFO
{
	char co_name[15];
	char date[9];
	int qnty;
	float price;
	char comment[50];
};

void main()
{
	struct STOCK_INFO p[3], *ptr;
	int i;

	printf("the stock_information:\n");
	for(i=0; i<3; i++)
	{
		scanf("%s", p[i].co_name);
		scanf("%s", p[i].date);
		scanf("%d", &p[i].qnty);
		scanf("%f", &p[i].price);
		scanf("%s", p[i].comment);
	}
	printf("co_name:\tdate:\tqnty:\tprice:\tcomment:\n");
	for(ptr=p; ptr<=p+2; ++ptr)
		printf("%s\t\t%s\t%d\t%.1f\t%s\n",\
		ptr->co_name, ptr->date, ptr->qnty, ptr->price, ptr->comment);
}


 			
