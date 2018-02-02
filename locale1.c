/*****************************************
 *		locale1.c by GUN	 *
 * 	The program describes 		 *
 *	locale.h that shows constants  	 *
 * 	for date formats 		 *
 *	localeconv().			 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */
#include <stdlib.h>	/* this is for exit() */
#include <time.h>
#include <locale.h>

int main()
{
	struct lconv *lc;

	setlocale(LC_MONETARY, "");
	lc = localeconv();
	printf("Local Currency Symbol : %s\n", lc->currency_symbol);
	printf("International Currency Symbol : %s\n", lc->int_curr_symbol);
	printf("decimal point : %s\n", lc->decimal_point);
	printf("The sizeof(lconv) = %d\n", sizeof(lc));
}


