/*****************************************
 *		P8_8.c by GUN	 	 *
 * 	The program describes 		 *
 *	the address of the pointer	 *
 *	array.				 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <string.h>

char *keywords[] =
{
	"ADD",
	"CHANGE",
	"DELETE",
	"LIST",
	"QUIT",
	0
};

int main()
{
	int j, k;

	for(j=0; keywords[j] != 0; j++)
	{
		printf("*** &keywords[%d] = %p ***\n", j, &keywords[j]);
		for(k=0; *keywords[j] != '\0'; k++)
			printf("\tkeywords[%d]=%p ---> %c\n",\
			 j, keywords[j]++,*keywords[j] );
		printf("\tkeywords[%d]=%p ---> %c\n",\
		 j, keywords[j], *keywords[j]);  
	}
	return(1);
}

 			
