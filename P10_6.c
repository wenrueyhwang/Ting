/*****************************************
 *		P10_6.c by GUN	 	 *
 * 	The program describes 		 *
 *	the usage of    	 	 *
 *	 fseek(), and ftell() 		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <stdlib.h>	/* this is for exit() */

int main(int argc, char *argv[])
{
	FILE *fp;
	int offset=0, position;
	int ch;

	if(argc != 2)
	{
		printf("This is an error for lacking parameter.\n");
		exit(-1);
	}
	if((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open the file %s\n", argv[1]);
		exit(-1);
	}

	position = ftell(fp);
	while((ch = fgetc(fp)) != '*') /* using '*' to control the end. */
	{
		putchar(ch);
		printf("*** the position is %2d --->\t", position);
		if(fseek(fp, -(offset+2),SEEK_END) != EOF)
		{
			position = ftell(fp);
			putchar(fgetc(fp));
			printf("===the position is %2d\n", position);
		}
		fseek(fp, ++offset, SEEK_SET);
	/*** Note the SEEK_SET = 0; SEEK_CUR = 1; SEEK_END = 2; ***/
		position = ftell(fp);
	}
	fclose(fp);
	printf("\n");
}

