/*****************************************
 *		Pstdio.c by GUN 	 *
 * 	The program describes stdio 	 *
 *	Standard files IO  	  	 *
 * 	fopen(), fread(), fwrite()	 *
 *	fclose(), fprintf(), fscanf() 	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#define message_for(a, b)	\
	printf(#a " and " #b " We love you!\n")

#define tokenpaster(n) printf("token" #n " = %d\n", hwang##n)

int main()
{
	FILE *fp;
	char buffer[255];
	int hwang34 = 40;

	printf("sizeof(char) = %d\n", sizeof(char));
	printf("sizeof(unsigned char) = %d\n", sizeof(unsigned char));
	printf("sizeof(short) = %d\n", sizeof(short));
	printf("sizeof(unsigned short) = %d\n", sizeof(unsigned short));
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(unsigned int) = %d\n", sizeof(unsigned int));
	printf("sizeof(long) = %d\n", sizeof(long));
	printf("sizeof(unsigned long) = %d\n", sizeof(unsigned long));
	printf("sizeof(long long) = %d\n", sizeof(long long));
	printf("sizeof(unsigned long long) = %d\n", sizeof(unsigned long long));
	printf("sizeof(float) = %d\n", sizeof(float));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("sizeof(long double) = %d\n", sizeof(long double));

	tokenpaster(34);
	message_for(Wen-Ruey, Hwang);
	fp = fopen("tmp/test.txt","w+");
	fprintf(fp, "This is a test for fprintf.....\n");
	fprintf(fp, "current file: %s\n", __FILE__);
	fprintf(fp, "current date: %s\n", __DATE__);
	fprintf(fp, "current time: %s\n", __TIME__);
	fprintf(fp, "current line: %d\n", __LINE__);
	fprintf(fp, "current ansic: %d\n", __STDC__);
	fputs("This is a test for fputs...\n", fp);
	fclose(fp);
/* ******************************************* */
	fp = fopen("tmp/test.txt","r+");
	fscanf(fp, "%s", buffer);
	printf("1: %s\n", buffer);
	fgets(buffer, 255, fp);
	printf("2: %s\n", buffer);
	fgets(buffer, 255, fp);
	printf("3: %s\n", buffer);
	fgets(buffer, 255, fp);
	printf("4: %s\n", buffer);
	fgets(buffer, 255, fp);
	printf("5: %s\n", buffer);
	fread(buffer, sizeof(buffer), sizeof(char), fp);
	printf("all: %s\n", buffer);
	fclose(fp);
}
