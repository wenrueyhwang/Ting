/*****************************************
 *		P11_0.c by GUN	 	 *
 * 	The program describes 		 *
 *	ctype.h that suppots 	  	 *
 * 	int isalnum(int c);		 *
 *					 * 
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <stdlib.h>	/* this is for exit() */
#include <fcntl.h>	/* this is for O_RDONLY, O_WRONLY... */
#include <ctype.h>

int main()
{
	int var1 = 'd';
	int var2 = '2';
	int var3 = '\t';
	int var4 = ' ';

	if(isalnum(var1)) printf("var1 = [%c] is alphanumeric\n", var1);
	else printf("var1 = [%c] is not alphanumeric\n", var1);
	
	if(isalnum(var2))  printf("var2 = [%c] is alphanumeric\n", var2);
	else printf("var2 = [%c] is not alphanumeric\n", var2);

	if(isalnum(var3)) printf("var3 = [%c] is alphanumeric\n", var3);
	else printf("var3 = [%c] is not alphanumeric\n", var3);

	if(isalnum(var4)) printf("var4 = [%c] is alphanumeric\n", var4);
	else printf("var4 = [%c] is not alphanumeric\n", var4);
	
	return(1);
}

