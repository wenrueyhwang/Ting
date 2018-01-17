/*****************************************
 *		P4_6.c by GUN	 	 *
 * 	The program defines and 	 *
 * 	initializes a structure and	 *
 *	print out the members.		 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

struct STOCK_INFO
{
	char co_name[15];
	char date[10];
	int qnty;
	float price;
	char comment[40];
}	current =
{
	"IBM Inc.",
	"01-15-18",
	45,
	98.0,
	"The product computer is acer..."
};

int main()
{
	printf("the company name\t= %s\n", current.co_name);
	printf("the date \t\t= %s\n", current.date);
	printf("the quantity \t\t= %d\n", current.qnty);
	printf("the price \t\t= %-6.1f\n", current.price);
	printf("the comment \t\t= %s\n", current.comment);
}
