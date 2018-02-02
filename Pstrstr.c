/*****************************************
 *		Pstrstr.c by GUN 	 *
 * 	The program describes strings 	 *
 *	string.h that suppots 	  	 *
 * 	strstr()			 *
 *					 * 
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 
#include <string.h>
#include <errno.h>

int main()
{
	FILE *fp;
	const char haystack[20] = "TutorialsPoint Point";
	const char needle[10] = "Point";
	char *ret;
	char *rt;


	ret = strstr(haystack, needle);
	printf("The substring is [%s]\n", ret);
	fp = fopen("file.txt","r");
	if(fp == NULL)
		printf("Error string[%d]: %s\n", errno, strerror(errno));
	else 
		fclose(fp);
	/* the error number is errno and string is strerror(errno) */

	rt = strpbrk(haystack, needle);
	if(rt)
		printf("The First matching character %c\n", *rt);
	else
		printf("Character not found.\n");
}
