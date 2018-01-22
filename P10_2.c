/*****************************************
 *		P10_2.c by GUN	 	 *
 * 	The program describes 		 *
 *	using line I/O --->  	 *
 *	fgets() and fputs().		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *sptr, *tptr;
	char *gh;
	int  ph;
	char line[20];

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

	while((gh = fgets(line, sizeof(line), sptr)) != NULL) 
	{
		printf("fgets() = %p *****\n", gh);
		ph = fputs(line, tptr);
		printf("fputs() = %d *****\n", ph);
		printf("the line = [%s]\n", line);
	}
	printf("fgets() = %p *****\n", gh);

	fclose(tptr);
	fclose(sptr);
}
