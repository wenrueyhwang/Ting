/* file: linklist.c */

#include "linklist.h"
#include <stdlib.h>
#include <stdio.h>

/*global functions */
/* This routine receives a list pointer and a pointer to a new link that
   is to be added to the list. The new link will be placed a the head of
   the linked list. If the list is empty and there is  no NULL link to
   the list, there is an error and the funtion return FALSE. */
int add_link(Linklist *list, Link *new_link)
{
	Link *start;

	start = list->head;
	if(start == NULL) /* get an empty list */
	{
		if(new_link->next_link != NULL)
			return FALSE;
			/* get an error-no NULL link for the end */
		else
		{
			list->head = new_link;
			return TRUE;
		}
	}
	else
	{
		new_link->next_link = start;
		start->previous_link = new_link;
		list->head = new_link;
		return TRUE;
	}
}
/* This routine ermoves a link. */
int delete_link(Linklist *list, Link *old_link)
{
	Link *start;

	start = list->head;
	if(start==old_link) /*first list entry */
	{
		start->next_link->previous_link = NULL;
		list->head = start->next_link;
	}
	else
	{
		while(start != old_link && start->next_link != NULL)
		{
			if(start->next_link==NULL)
				return FALSE;
			else
				start= start->next_link;
		}
		start->previous_link->next_link = start->next_link;
		start->next_link->previous_link = start->previous_link;
	}
	link__(old_link);
	return TRUE;
}
void walk_list(Linklist *list)
{
	Link *start;

	start = list->head;
	while(start->next_link != NULL)
	{
		(*start->current_object->exercise)(start->current_object);
		start = start->next_link;
	}
}

/* object constructor */
Linklist* linklist_(void)
{
	Linklist *this;

	this = (Linklist *) malloc(sizeof(Linklist));
	if(this == NULL) exit(1);

	this->head = NULL;
	return this;
}
/* linklist point destrutor */
void linklist__(Linklist * this)
{
	free(this);
}

