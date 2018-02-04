/*****************************************
 *		P14_5.c  by GUN 	 *
 * 	Program describes dynamic memory *
 * 	using malloc(), calloc(), free 	 *
 *	realloc() to show dynamic memory *
 * 	management	 		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOTAL 10
#define MAX_LEN 50

#define CALLOC(n,x) (x*)calloc(n, sizeof(x))

int main()
{
	char *name[TOTAL];
	char buffer[MAX_LEN+1];
	int i, j;
	FILE *fp;

	fp = fopen("tmp/name.txt","r");
	if(fp == NULL)
	{
		printf("the file can not be found..\n");
		exit(-1);
	}
	printf("Get %d names from the file.\n", TOTAL);
	for(i = 0; i<TOTAL; i++)
	{
		char c;
		int length = 0;

		while((c = fgetc(fp)) != '\n')
			if(length < MAX_LEN)
				buffer[length++] = c;
		buffer[length] = '\0';
		name[i] = CALLOC(length, char);
		strcpy(name[i], buffer);

	}
	for(j=0; j<TOTAL; j++)
		printf("the name[%d] = %s\n", j, name[j]);
	fclose(fp);
}

