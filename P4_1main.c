/*****************************************
 *		P4_1main.c by GUN	 *
 * 	The program inputs internal  	 *
 * 	definitions			 *
 *	(auto, register, and static )    *
 *			                 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
void save(float pi);
float get();

int main()
{
	float myvalue, pi;

	pi = 22.0/7.0;
	save(pi);
	save(pi);
	save(pi);
	save(pi);
	myvalue = get();
	printf("myvalue = %f\n",myvalue);
} 


