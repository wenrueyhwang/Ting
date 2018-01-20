/*****************************************
 *		P9_1.c by GUN	 	 *
 * 	The program describes 		 *
 *	the usage of bitfield 	 	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <string.h>

struct DWORD
{
	unsigned  ch 	: 8;
	unsigned forgrd	: 3;
	unsigned intense: 1;
	unsigned bkgrd	: 3;
	unsigned blink	: 1;
};

int main()
{
	struct DWORD disp_word;
	struct DWORD *disp_ptr;

	disp_word.forgrd = 5;
	disp_word.ch = '#';

	disp_ptr = &disp_word;
	printf("the forgrd is %u\n", disp_ptr->forgrd);
	printf("the ch is %c\n", disp_ptr->ch);
}
