/*****************************************
 *		P11_2.c  by GUN 	 *
 * 	The program describes string.h 	 *
 *	strcmp() and strncmp()		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#define KEYWORD_SZ 6

char *keywords[] =
{
	"ADD",
	"DELETE",
	"CHANGE",
	"REMOVE",
	"QUIT",
	0
};

int main(int argc, char *argv[])
{
	int i;

	if(argc != 2)
	{
		printf("Syntax error: command is not correct!!!\n");
		exit(-1);
	}

	for(i=0; keywords[i] != 0; i++)
	{
		if(strncmp(argv[1], keywords[i], KEYWORD_SZ) == 0)
			break;
	}
	if(keywords[i] == 0) printf("No match\n");
	else printf("Match, index = %d\n",i+1);
}
