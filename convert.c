#include <stdio.h>
/********************************************************
 *	This function displays the given ASCII		*
 *	code and its associated display character.	*
 ********************************************************/
void convert(int c)
{
	printf("\t\tdecimal\t  octal\t hexdecimal\n");
	printf("\t%c ---> \t%d \t  %o\t %x\n", c,c, c, c);
	if(c < ' ') printf("(Special characters are PC extensions to ASCII)\n");
	return;
}

