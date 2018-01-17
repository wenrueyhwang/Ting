/*****************************************
 *		P4_8display.c by GUN	 *
 * 	The program defines and 	 *
 * 	initializes a structure and	 *
 * 	display the members.		 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

struct STOCK_INFO
{
	char co_name[15];
	char date[10];
	int qnty;
	float price;
	char comment[100];
};
void display(struct STOCK_INFO str)
{

	printf("the company name\t= %s\n", str.co_name);
	printf("the date \t\t= %s\n", str.date);
	printf("the quantity \t\t= %d\n", str.qnty);
	printf("the price \t\t= %-6.1f\n", str.price);
	printf("the comment \t\t= %s\n", str.comment);
}
