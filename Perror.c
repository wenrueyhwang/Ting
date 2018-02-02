/*****************************************
 *		Perror.c by GUN 	 *
 * 	The program describes errors 	 *
 *	in file errno.h			 *
 * 	errno, perror(), and stderror	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

extern int errno; 

int main()
{
	FILE *fp;
	int errnum;

	fp = fopen("tmp/unexist.txt","r");

	if(fp == NULL)
	{
		errnum = errno;
		fprintf(stderr, "Value of error is %d\n", errno);
		perror("Error printed by perror:");
		fprintf(stderr, "Error opening file: %s\n",strerror(errnum));
	}
	exit(EXIT_SUCCESS);
}
