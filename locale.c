/*****************************************
 *		locale.c by GUN	 	 *
 * 	The program describes 		 *
 *	locale.h that shows constants  	 *
 * 	for date formats 		 *
 *	currency symbols.		 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */
#include <stdlib.h>	/* this is for exit() */
#include <time.h>
#include <locale.h>

int main()
{
	time_t currtime;
	struct tm *timer;
	char buffer[80];

	time(&currtime);
	timer = localtime(&currtime);

	printf("Locale is : %s\n", setlocale(LC_ALL, "en_US"));
	strftime(buffer, 80, "%c", timer);
	printf("Date is : %s\n", buffer);

	printf("Locale is : %s\n", setlocale(LC_ALL, ""));
	strftime(buffer, 80, "%c", timer);
	printf("Date is : %s\n", buffer);
}


