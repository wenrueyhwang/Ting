/*****************************************
 *		Pstring.c by GUN 	 *
 * 	The program describes strings 	 *
 *	string.h that suppots 	  	 *
 * 	strcpy(), strncpy(),		 *
 * 	strcmp(), strncmp(),		 *
 *	strcat(), strncat(),		 *
 * 	strlen(), strchr(), strnchr()	 *
 *					 * 
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <string.h>

int main()
{
	char src[90];
	char dest[180];
	char ndest[80];
	char *pt;


	int n, ret, ret0, ret1, ret2;


	memset(dest, '\0', sizeof(dest));
	memset(ndest, '\0', sizeof(ndest));

	strcpy(src, "this is http:\\www.tutorialspoint.com");
	strcpy(dest, src);
	strncpy(ndest, src, 10);

	memset(ndest, '&', 3);
	puts(dest);
	puts(ndest);

	printf("Final copied string of strcpy(dest, src) :\n%s\n", dest);
	printf("Final copied string of strncpy(ndest, src, 10) :\n%s\n",\
		ndest);

	n = strlen(dest);
	printf("the length of dest = %d\n", n);
	pt = memchr(dest,'.', n); /* searching the first '.' of dest */
	puts(pt);

	memmove(pt, dest, strlen(dest));
	printf("the Pt = \n");
	puts(pt);

	memcpy(dest, src, strlen(src));
	memset(src, '*', 1);
	ret = memcmp(dest, src, strlen(dest));
	printf("dest = \n");puts(dest);
	printf("src = \n");puts(src);
	printf("ret = memcmpy() %d\n", ret);

	strcat(dest, src);
	printf("After strcat(dest, src) =\n%s\n", dest);	
	strncat(pt, src, 10);
	printf("pt = \n"); puts(pt);printf("src = \n");puts(src); 
	printf("After srrncat(pt, src, 10) =\n%s\n", dest);

	ret0 = strcmp(dest, dest);
	ret1 = strcmp(dest, src);
	ret2 = strcmp(src, dest);
	puts(dest); printf("\n"); puts(src);
	printf("ret = strcmp(dest, src) = %d, %d, %d\n", ret0, ret1, ret2);
	/*********************************/
	strcpy(src, "Tutorials Point");
	int len;
	len = strxfrm(dest, src, 20);
	printf("Length of string[%s] = %d\n", dest, len);
	printf("Length of string[%s] = %d\n", dest, strlen(dest));
}


