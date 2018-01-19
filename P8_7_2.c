/*****************************************
 *		P8_7_2.c by GUN	 	 *
 * 	The program describes 		 *
 *	string pointer using 		 *
 *	using array			 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <string.h>
#define MAX_CMD 7
char *keywords[] =
{
	"ADD",
	"CHANGE",
	"DELETE",
	"LIST",
	"QUIT"
};
#define NUM_CMDS	(sizeof(keywords)/sizeof(char*))

int main()
{
	char cmd[NUM_CMDS];
	int i;

	printf("%d --> %d\n", sizeof(float*), NUM_CMDS);

	printf("?");
	scanf("%s", cmd); 
	/* getline(cmd, MAX_CMD); */
	for(i=0; i <NUM_CMDS; i++)
		if(strcmp(cmd, keywords[i]) == 0) break;
		else printf("the command = %s\n", keywords[i]);
	if(i>=NUM_CMDS)
		printf("%s is not a valid command.\n", cmd);

	return(1);
}

 			
