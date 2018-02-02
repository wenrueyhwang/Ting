/*****************************************
 *		Pgetenv.c by GUN 	 *
 * 	The program describes stdlib 	 *
 *	for number transform  	  	 *
 * 	getenv(name)			 *
 *					 * 
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	char command[50];

	strcpy(command, "ls *.c");
	system(command);

	printf("PATH = %s\n", getenv("PATH"));
	printf("HONE = %s\n", getenv("HOME"));
	printf("ROOT = %s\n", getenv("ROOT"));
}

