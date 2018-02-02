/*****************************************
 *		P11_1.c by GUN	 	 *
 * 	The program describes 		 *
 *	ctype.h that suppots 	  	 *
 * 	int error;			 *
 *	stdinput, stderr, and stdout	 * 
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <stdlib.h>	/* this is for exit() */
#include <fcntl.h>	/* this is for O_RDONLY, O_WRONLY... */
#include <errno.h>
#include <string.h>

extern int erron;

int main()
{
	FILE *fp;

	fp = fopen("file.txt", "r");
	if(fp == NULL) 
	{
		printf("value of errno = %d\n",errno);
		printf("Error open file: %s\n", strerror(erron));
	} 
	else fclose(fp);
	return(1);
}


