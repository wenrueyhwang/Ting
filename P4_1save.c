/*****************************************
 *		P4_1save.c by GUN	 *
 * 	The program defines save()  	 *
 * 	and get() functions		 *
 *	(auto, register, and static )    *
 *			                 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
static float f_value;

void save(float myvalue)
{
	static int counter;
	f_value = myvalue *2;
	printf("myvalue = %f\n", myvalue);
	counter++;
	printf("the counter = %d\n", counter);
	return;
}
float get()
{
	return(f_value);
}



