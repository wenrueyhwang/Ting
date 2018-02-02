/*****************************************
 *		Ptime.c by GUN 	 	 *
 * 	The program describes time.h 	 *
 *	time represents  	  	 *
 * 	asctime(), gmtime(), localtime   *
 *	ctime(), difftime() 		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define BST (+1)
#define CCT (+8)


int main()
{
	struct tm t;
	struct tm *info;

	clock_t start_t, end_t;
	double total_t;
	int i;

	time_t rawtime;
	time(&rawtime);
	/* GMT time */
	info = gmtime(&rawtime);
	printf("Current World Clock:\n");
	printf("London : %2d:%02d\n",\
		 (info->tm_hour+BST)%24, info->tm_min);
	printf("China : %2d:%02d\n",\
		(info->tm_hour+CCT)%24, info->tm_min);
	/** localtime() ***/
	time(&rawtime);
	info = localtime(&rawtime);
	puts(asctime(info));
/*******************************************/
	time_t curtime;
	time(&curtime);
	printf("Current time = %s\n", ctime(&curtime));
/*******   to show difftime() ***************************************/
	time(&start_t);
	sleep(5);
	time(&end_t);
	printf("Execution time = %.3lf seconds\n", difftime(end_t, start_t));


	start_t = clock();
	printf("the start_t = %ld\n", start_t);
	printf("CLOCKS_PER_SEC = %ld\n", CLOCKS_PER_SEC);
	for(i=0; i<10000000; i++){}

	end_t = clock();
	printf("the end_t = %ld\n", end_t);
	total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("The total time: %lf second\n", total_t);

	t.tm_sec = 10;
	t.tm_min = 10;
	t.tm_hour = 6;
	t.tm_mday = 25;
	t.tm_mon = 2;
	t.tm_year = 2018 - 1900;
	t.tm_wday = 6;
	puts(asctime(&t));
}
 
