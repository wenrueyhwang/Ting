/*****************************************
 *		P4_5display by GUN	 *
 * 	The module is a function  	 *
 * 	of display  			 *
 *			                 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

void display(int i, char names[4][15])
{
	i--;

	if(i >=0 && i <=3)
		printf("Company name is %s\n", names[i]);
	else 
		printf("Valid index....\n");
}


