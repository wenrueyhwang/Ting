/*****************************************
 *		P10_3.c by GUN	 	 *
 * 	The program describes 		 *
 *	using line I/O ---> 	 	 *
 *	fgets(), fputs(), 		 *
 *	gets() and puts().		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *file;
	char string[80]="Now is the time for all good men.\n";

	/** Input data to file: temp.dat **/
	printf("Input data from gets() from standard input:\n");
	file = fopen("temp.dat","w"); /* open a file for writing */
	/* while(gets(string) != NULL) */
	/* gets is dangerous to use in gcc ????????*/
	fputs(string, file);
	fclose(file);
	/**  Output data from file to standard screen. **/
	printf("Output data from puts() to standard screen:\n");
	file = fopen("temp.dat","r");
	while(fgets(string, 12, file) != NULL)
		puts(string);
	fclose(file);
}
