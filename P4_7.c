/*****************************************
 *		P4_7.c by GUN	 	 *
 * 	The program defines and 	 *
 * 	initializes a structure array	 *
 *	print out the members.		 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

#define MAX 10
struct NAME_INFO
{
	char name[15];
	int year;
	int month;
	int day;
};

int main()
{
	int count, i;
	static struct NAME_INFO birthday[MAX];
	
	printf("Please input the number :\n");
	scanf("%d", &count);
	printf("Please input the data :\n");
	for(i=0; i< count; i++)
	{
		printf("the data[%d] is the following:\n", i+1);
		scanf("%s", birthday[i].name);
		scanf("%d", &birthday[i].year);
		scanf("%d", &birthday[i].month);
		scanf("%d", &birthday[i].day);
	}
	printf("\nThe output data is:\n");
	for(i=0; i < count; i++)
		printf("birthday of \t%s is %d:%d:%d\n", \
		birthday[i].name, \
		birthday[i].year, \
		birthday[i].month, \
		birthday[i].day);
}
