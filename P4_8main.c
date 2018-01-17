/*****************************************
 *		P4_8main.c by GUN	 *
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
}	current =
{
	"HWANG Inc.",
	"01-15-18",
	45,
	98.0,
	"The products are generated from the  acer..."
};

void display(struct STOCK_INFO current);

int main()
{
	display(current);
}

