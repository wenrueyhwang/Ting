/*****************************************
 *		P14_6.c  by GUN 	 *
 * 	Program uses dynamic memory	 *
 * 	to build an alphabetized linked	 *
 *	list.				 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_SIZE 30
typedef struct LISTNODE
{
	struct LISTNODE *predecessor;
	struct LISTNODE *successor;
	char data[NAME_SIZE];
} NODE;

NODE *insert(NODE* node, char name[NAME_SIZE]);

int main()
{
	char name[NAME_SIZE];
	NODE *root;
	NODE *np;
	int i=0, j=0;
	FILE *fp;


	printf("the sizeof(NODE*) = %d\n", sizeof(NODE*));
	/* NOTE: this total sizeof(NODE)  will show increase
		the integer number of the sizeof(NODE*) */
	printf("the sizeof(NODE) = %d\n", sizeof(NODE));
	/* allocate and initialize the root node to point to itself. */
	root = malloc(sizeof(NODE));
	root->predecessor = root->successor = root;
	root->data[0] = '\0';
	/* create a file stored listed names */
	fp = fopen("tmp/node.txt","r");
	if(fp == NULL)
	{
		printf("Could not find files..\n");
		exit(-1);
	}
	/* build a linked list of names. */
	while(!feof(fp))
	{
		fgets(name, NAME_SIZE, fp);/* READ ONE STRING */
		if(strncmp(name, "quit", 4) == 0) break;
		if(insert(root, name) == 0)
		{
			printf("Out of interal memory.\n");
			exit(-1);
		}
	}
	fclose(fp);

	/* display the content of the list */
	printf("The sorted name data is:\n");
	for(np = root->successor; np != root; np = np->successor)
		printf("name[%d] = %s", j++, np->data);
	printf("Done.\n");
}

NODE *insert(NODE *node, char name[NAME_SIZE])
{
	NODE *np;
	NODE *newnode;

	for(np=node->successor; (np != node)\
		&& (strcmp(name, np->data) >0); np = np->successor);
	if((newnode = malloc(sizeof(NODE))) != 0)
	{
		strncpy(newnode->data, name, NAME_SIZE);
		newnode->successor = np;
		newnode->predecessor = np->predecessor;
		newnode->predecessor->successor = newnode;
		np->predecessor = newnode;
	}
	return(newnode);
}

