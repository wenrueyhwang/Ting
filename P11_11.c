/*****************************************
 *		P11_11.c  by GUN 	 *
 * 	The program describes time.h 	 *
 *	time format: struct tm:		 *
 * tm_sec, tm_min, tm_hour, tm_mday, 	 *
 * tm_mon, tm_year, tm_wday, tm_yday,	 *
 * tm_isdst. function ctime() 	  	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>
#include <time.h>

int main()
{
	long ltime;
	struct tm *newtime;

	time(&ltime); /* a const time_t time */
	newtime = localtime(&ltime); /* a const struct tm time */

	printf("the time1 is %s\n", ctime(&ltime));
	printf("the time2 is %s\n", asctime(newtime));
}
