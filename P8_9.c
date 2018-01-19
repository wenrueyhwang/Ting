/*****************************************
 *		P8_9.c by GUN	 	 *
 * 	The program describes 		 *
 *	of comparing the data of 	 *
 *	pointer array.			 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <string.h>

#define MAX_CMD 10

char *keywords[] =
{
	"ADD",
	"CHANGE",
	"DELETE",
	"LIST",
	"QUIT",
	"0"
};

int main()
{

	char cmd[MAX_CMD];
	int i, flag=0;

	do
	{
		printf("Please input a command: ");
		scanf("%s", cmd);
		for(i = 0; keywords[i] != "0"; i++)
		{
			printf("the cmd = %s--->keywords[%d] = %s\n",\
				cmd, i, keywords[i]);
			if(strcmp(cmd, keywords[i]) == 0)
			{
				printf("It is right ---> %s <---\n",\
					keywords[i]);
				flag = 1;
				break;
			}
		}
		if(flag == 0) printf("This is a wrong command %s<<<\n",cmd);
	} while(flag ==0);
	return(1);
}

 			
