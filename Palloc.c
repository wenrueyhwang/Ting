/*****************************************
 *		Palloc.c by GUN 	 *
 * 	The program describes stdlib.h 	 *
 *	calloc(), malloc(), realloc()	 *
 * 	free()				 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>


int main()
{
	char name[100];
	char *description;
	int i = 0;

	strcpy(name, "Wen-Ruey Hwang");

	/* allocate memory dynamically */
	description = calloc(50, sizeof(char)); /* calloc(num, sizeof()) */
	/*
	description = malloc(100 * sizeof(char)); /* malloc(num * sizeof())  
	*/

	if(description == NULL)
		fprintf(stderr, \
		"Error -- unable to allocate required memory\n");
	else
		strcpy(description, \
		"Wen-Ruey Hwang");

	printf("description : %s\n", description);
	description = realloc(description, 130*sizeof(char));
	if(description == NULL)
		fprintf(stderr, "Error--unable to reallocate ...\n");
	else
		strcat(description, " is a DSP engineer in GE.\n");

	printf("name = %s\n", name);
	printf("description : %s\n", description);
	free(description);
}
