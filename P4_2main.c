/*****************************************
 *		P4_2main.c by GUN	 *
 * 	The program creates a stack  	 *
 * 	to push a serial value then	 *
 *	to pop the values.	    	 *
 *			                 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
void push(float value);
float pop();

int main()
{
	float value = 1.1;
	for(int i=0; i<5;i++)
	{
		printf("push(%6.1f)\n", value);
		push(value);
		value += 1;
	}
	for(int i=0 ; i<5 ;i++)
	{
		printf("(%d) pop = %6.1f\n", i+1, pop());
	}
}


