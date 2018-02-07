/*****************************************
 *		Pfunction.c  by GUN 	 *
 * 	Callback function using pointer  *
 * 	function 			 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void A();
void B(void(*)());

int main()
{
	void (*ptr)() = &A; 
	/* assign the address of function A to pointer (*ptr)() */
	
	B(ptr);
}
void A()
{
	printf("I am function A.\n");
}
void B(void (*ptr)())
{
	printf("Call function B.\n");
	(*ptr)();
}

