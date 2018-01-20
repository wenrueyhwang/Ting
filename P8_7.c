/*****************************************
 *		P8_7.c by GUN	 	 *
 * 	The program describes 		 *
 *	struct pointer as an 		 *
 *	argument of a function.		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <string.h>

struct STOCK_INFO
{
	char co_name[15];
	char date[10];
	int  qnty;
	float price;
	char comments[40];
};
void display(struct STOCK_INFO *stock_rec);

void main()
{
	struct STOCK_INFO current;
	strcpy(current.co_name, "IBM Inc."); 
	/* in string.h of strcpy(dest, source); */
	strcpy(current.date,"01/01/87");
	current.qnty = 100;
	current.price = 101.50;
	strcpy(current.comments,\
	"This is a new product.");
	display(&current);
}

/*********** the display function ****************/
void display(struct STOCK_INFO *stock_rec)
{
	printf("Display the stock information:\n");
	printf("company name = %s\n",\
		(*stock_rec).co_name);
	printf("date = %s\n", (*stock_rec).date);
	printf("quantity = %d\n", stock_rec->qnty);
	printf("price = %.1f\n", stock_rec->price);
	printf("comments = %s\n", stock_rec->comments);
}

 			
