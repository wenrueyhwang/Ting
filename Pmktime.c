/*****************************************
 *		Pmktime.c by GUN  	 *
 * 	The program describes time.h 	 *
 *	time represents  	  	 *
 * 	mktime()   			 *
 *	ctime(), difftime() 		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>


struct address
{
	char name[50];
	char street[50];
	int phone;
	int price;
};

int main()
{
	int ret;
	struct tm info;
	char buffer[80];


	info.tm_year = 2018 - 1900;
	info.tm_mon =  7 - 1;
	info.tm_mday = 4;
	info.tm_hour = 0;
	info.tm_min = 0;
	info.tm_sec = 0;
	info.tm_isdst = 1;

	ret = mktime(&info);
	if(ret == -1)
	{
		printf("Error: Unable to make time using mktime.\n");
	}
	else
	{
		strftime(buffer, sizeof(buffer), "%c", &info);
		/* time format transform to string */
		puts(buffer);
	}
	printf("name offset = %d bytes in address structure.\n",\
		 offsetof(struct address, name));
	printf("street offset = %d bytes in address structure.\n",\
		offsetof(struct address, street));
	printf("phone offset = %d bytes in address structure.\n",\
		offsetof(struct address, phone));
	printf("price offset = %d bytes in address structure.\n",\
		offsetof(struct address, price));
}


