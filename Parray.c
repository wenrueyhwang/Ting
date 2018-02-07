/*****************************************
 *		Parray.c  by GUN 	 *
 * 	using array as a pointer for     *
 * 	implementing each function. 	 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ansi.h"

typedef void (*VoidFunc)();
/* you have to use typedef to define a pointer function */

void buy();
void sell();
void gain_los();
void rem_stock();
void current();

int menu();

static const VoidFunc dispatch[] =
{
	buy,
	sell,
	current,
	gain_los,
	rem_stock
};

int main()
{
	int selection;
	selection = menu();
	while( selection != 6)
	{
		dispatch[selection-1]();
		getchar();
		selection = menu();
	}
	printf("Done.\n");

}

int menu()
{
	int item;

	ED;
	CUP(0, 0);
	printf("\t\t*******************************************\n");
	printf("\t\t***\t1. buy a stock.\t\t\t***\n");
	printf("\t\t***\t2. complete a transation\t***\n");
	printf("\t\t***\t3. report current holding\t***\n");
	printf("\t\t***\t4. gain/loss report\t\t***\n");
	printf("\t\t***\t5. remove a current holding\t***\n");
	printf("\t\t***\t6. Done\t\t\t\t***\n");
	printf("\t\t*******************************************\n");
	printf("\t\tPlease select one item...");
	scanf("%d", &item);
	getchar();
	return(item);
}
void buy(void)
{
	printf("this is buy() action.\n");
}
void sell(void)
{
	printf("this is sell() action.\n");
}
void current(void)
{
	printf("this is to report current holding.\n");
}
void gain_los(void)
{
	printf("this is to have gain_loss report.\n");
}
void rem_stock()
{
	printf("this is to remove a stock.\n");
}
 
