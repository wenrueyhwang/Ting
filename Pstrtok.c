/*****************************************
 *		Pstring.c by GUN 	 *
 * 	The program describes strings 	 *
 *	string.h that suppots 	  	 *
 * 	strtok()			 *
 *					 * 
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <string.h>

int main()
{
	char str[80] = "This is - www.tutorialspoint.com - website";
	const char s[2] = "-";
	char *token;

	/* get first token */
	token = strtok(str, s);
	/* walk through other token */
	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, s);
	}
}
