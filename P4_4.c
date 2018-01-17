/*****************************************
 *		P4_4.c by GUN	 	 *
 * 	The program defines and 	 *
 * 	initializes a multi-dimension	 *
 *	array		                 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

char co_index[4][15] = 
{
	"IBM Inc",
	"General Motors",
	"Shell Oil",
	"Delta"
};

int main()
{
	int index;

	for(index=0; 0 <= index && index <=3; index++)
		printf("Company name[%d] is %s\n", index, co_index[index]);
}


