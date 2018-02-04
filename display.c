/*****************************************
 *		display.c  by GUN 	 *
 * 	The program describes 	 	 *
 *	moving a segment data to  	 *
 *	another segment data using poke  *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ansi.h"
#define PAGE_ADDR (void*)0XB000 /* START ADDR */
#define PAGE_SZ 80*25

struct SCREEN
{
	char ch;
	char attribute;
} page[PAGE_SZ];

void poke(void* , const int, struct SCREEN, int );

void display(char key)
{
	int i;
	for(i=0; i< PAGE_SZ; i++)
	{
		page[i].ch = key;
		page[i].attribute = '\x07';
	}
	poke(PAGE_ADDR, 0, page, sizeof(page));
}
void poke(void* address, const int start, page, int size)
{
	memmove(address+start, (void*)page, size);
}


