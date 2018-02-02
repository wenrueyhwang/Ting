/*****************************************
 *		Pstdlib.c by GUN 	 *
 * 	The program describes stdlib 	 *
 *	for number transform  	  	 *
 * 	atof(), atoi(), atol()		 *
 *					 * 
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	double value;
	int valuei;
	long valuel;
	char str[20];
	char str1[80] = " 20.3556 this is a test 305.669";
	char *ptr;
	double ret;
	long lret;
	unsigned uret;


	strcpy(str, "98993489");
	value = atof(str);
	printf("the string value = %s --> atof(str) = %.3f\n", str, value);

/******************************************************************/
	strcpy(str,"tutorialspoint");
	value = atof(str);
	printf("the string value = %s --> atof(str) = %.3f\n", str, value);
/******************************************************************/
	strcpy(str, "98993489");
	valuei = atoi(str);
	printf("the string value = %s --> atoi(str) = %d\n", str, valuei);
/*****************************************************************/
	strcpy(str, "98993489");
	valuel = atol(str);
	printf("the string value = %s --> atol(str) = %ld\n", str, valuel);
/****************************************************************/
	printf("the string of strtoda() = %s\n", str1);
	ret = strtod(str1, &ptr);
	printf("The number(double) is %.3lf\n", ret);
	printf("string part is [%s]\n", ptr);
/******************************************************************/
	lret = strtol(str1, &ptr, 10);
	printf("The number(long) is %ld\n", lret);
	uret = strtoul(str1, &ptr, 10);
	printf("The number(unsigned) is %u\n", uret); 
}

