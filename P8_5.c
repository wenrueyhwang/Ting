/*****************************************
 *		P8_5.c by GUN	 	 *
 * 	The program creates a linked	 *
 *	list for sorting a set of number *
 * 	using structure and pointer.	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#define MAX 100
struct node
{
	int number;
	struct node *next;
};

void main()
{
	int count, i, j, temp;
	struct node n[MAX];
	struct node *ptr;
	/************ input all data **********/
	printf("The input data are showing the following: \n");
	scanf("%d", &j);
	for(i=0; i<j; i++)
	{
		scanf("%d", &n[i].number);
		if(i==j-1) n[i].next = NULL;
		else n[i].next = &n[i+1];
	}
	for(i=0; i<j ;i++)
		printf("the number of node[%2d] = %3d\n",\
			i, n[i].number); 
	/****** sorting all data *********/
	ptr = n;
	while(ptr->next != NULL)
	{
		if(ptr->number > ptr->next->number)
			ptr = ptr->next;
		else
		{
			temp = ptr->number;
			ptr->number = ptr->next->number;
			ptr->next->number = temp;
			ptr = n; // to point to original 
		}
	}
	/*******   print the sorted result    ******/
	ptr = n;
	count = 1;
	printf("The sorted data is as the following:\n");
	while(ptr != NULL)
	{
		printf("the number of node[%2d] is %3d\n",\
		count++, ptr->number);
		ptr = ptr->next;
	}
}


 			
