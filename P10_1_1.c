/*****************************************
 *		P10_1_1.c by GUN	 	 *
 * 	The program describes 		 *
 *	using character I/O --->  	 *
 *	getc() and putc().		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *sptr, *tptr;
	char ch;

	if(argc != 3)
	{
		printf("Syntac error: lack source and target files\n");
		exit(-1);
	}
	if((sptr = fopen(argv[1], "r")) == NULL)
	{
		printf("Cannot open file %s\n", argv[1]);
		exit(-1);
	}
	if((tptr = fopen(argv[2], "a")) == NULL)
	{
		printf("Cannot open file %s\n", argv[2]);
		exit(-1);
	}

	while((ch = getc(sptr)) != EOF) putc(ch, tptr);

	fclose(tptr);
	fclose(sptr);
}
