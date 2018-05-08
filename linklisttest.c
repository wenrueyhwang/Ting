/* file: linklisttest.c 
 to integrate all object, link, and linklist classes */

#include <stdio.h>

#include "object.h"
#include "link.h"
#include "linklist.h"


int main()
{
	Link *bel1, *bel2, *bel3, *bel4, *bel5, *nil;
	Object *no1, *no2, *no3, *no4, *no5;

	Linklist *list = linklist_(); /* contructor linklist_() */

	Link *start;
	int i;

	no1 = object_(1000000);
	no2 = object_(2000000);
	no3 = object_(3000000);
	no4 = object_(4000000);
	no5 = object_(5000000);

	nil = link_(NULL);
	bel1 = link_(no1);
	bel2 = link_(no2);
	bel3 = link_(no3);
	bel4 = link_(no4);
	bel5 = link_(no5);

	add_link(list, nil);
	add_link(list, bel1);
	add_link(list, bel2);
	add_link(list, bel3);
	add_link(list, bel4);
	add_link(list, bel5);

	printf("got here 1\n");
	start = list->head;
	for(i=0; i<5; i++)
	{
		printf("%ld\n", start->current_object->count);
		start= start->next_link;
	}
	walk_list(list);

	delete_link(list, bel5);
	delete_link(list, bel3);
	object__(no3);
	object__(no5);
	printf("got here 2\n");
	start = list->head;
	for(i=0; i<3 ;i++)
	{
		printf("%ld\n", start->current_object->count);
		start = start->next_link;
	}
	walk_list(list);
	return 0;
}


