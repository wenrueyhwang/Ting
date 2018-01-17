/*****************************************
 *		P4_2stack.c by GUN	 *
 * 	The program defines push()  	 *
 * 	and pop() functions		 *
 *	(to simulate a data structure)   *
 *			                 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
static float f_value[10];
static int index;

void push(float value)
{
	if(index < 10)
	{
		f_value[index] = value;
		index++;
	}
	else
		printf("overflow\n");
	return;
}
float pop()
{
	if(index > 0)
	{
		index--;
		return(f_value[index]);
	}
	else
		return(-1.0);
}



