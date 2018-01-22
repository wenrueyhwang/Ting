/*****************************************
 *		P10_5.c by GUN	 	 *
 * 	The program describes 		 *
 *	the usage of fread()  	 	 *
 *	, fwrite(), fseek(), and ftell() *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#include <stdlib.h>
struct sample
{
	int i;
	char c;
	float f;
	char string[6];
};

int main()
{
	FILE *file;
	static struct sample record1 = 
	{
		-4321, '&', 0.000320, "hello"
	};
	struct sample record2;
	long n1, n2;
	static char s1[]="***study hard!***", s2[80];

	n1 = 123456789;
	
	printf("The first record: data is :\n");
	printf("n1 = %ld\ns1 = %s\n", n1, s1);
	printf("record1.i = %d\n", record1.i);
	printf("record1.c = %c\n", record1.c);
	printf("record1.f = %f\n", record1.f);
	printf("record1.sting = %s\n", record1.string);
	printf("=================================\n");
	file = fopen("temp1.dat","w");
	fwrite((char*)&record1, sizeof(record1), 1, file);
	fwrite((char*)&n1, sizeof(n1), 1, file);
	fwrite(s1,sizeof(char), sizeof(s1), file);
	fclose(file);
/********************************************************/
	file = fopen("temp1.dat", "r");
	fread((char*)&record2, sizeof(record2), 1,file);
	fread((char*)&n2, sizeof(n1), 1, file);
	fread(s2, sizeof(char), sizeof(s2), file);
	fclose(file);
/*******************************************************/
	printf("The moving struct data is:\n");
	printf("n2 = %ld\ns2 = %s\n", n2, s2);
	printf("record2.i = %d\n", record2.i);
	printf("record2.c = %c\n", record2.c);
	printf("record2.f = %f\n", record2.f);
	printf("record2.string = %s\n", record2.string);
}
