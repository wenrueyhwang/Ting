/*****************************************
 *		P10_9.c by GUN	 	 *
 * 	The program describes 		 *
 *	the usage of the system I/O  	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <stdlib.h>	/* this is for exit() */
#include <fcntl.h>	/* this is for O_RDONLY, O_WRONLY... */

#define BUFSIZE 512

int main(int argc, char *argv[])
{
	int sp, tp;
	char block[512];
	int size;

	if(argc != 3)
	{
		printf("Syntax error: Append source target!\n");
		exit(-1);
	}
	if((sp = open(argv[1], O_RDONLY)) == EOF)
	{
		printf("Cannot open file %s\n", argv[1]);
		exit(-1);
	}
	if((tp = open(argv[2], O_WRONLY|O_TRUNC)) == EOF)
	{
		printf("Cannot open file %s\n", argv[2]);
		exit(-1);
	}
	printf("The sp = %d and the tp = %d\n", sp, tp);
	while((size = read(sp, block, sizeof(block))) > 0)
	{
		printf("The size is %d\n", size);
		write(tp, block, size);
	}
	close(sp);
	close(tp);
}

