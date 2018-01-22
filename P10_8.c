/*****************************************
 *		P10_8.c by GUN	 	 *
 * 	The program describes 		 *
 *	the usage of the system I/O  	 *
 *	descriptor sp = open()		 *
 *	0 = standard input(keyboard)	 *
 *	1 = standard output(monitor)	 *
 *	2 = standard error 		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <stdlib.h>	/* this is for exit() */
#include <fcntl.h>	/* this is for O_RDONLY, O_WRONLY... */

#define BUFSIZE 512

int main()
{
	char buf[BUFSIZE];
	int n;
	printf("Please input data:\n");
	while((n = read(0, buf, BUFSIZE)) > 1)
	{
		printf("the total inputed characters = %d\n", n);
		write(1, buf, n);
	}
}

