/*****************************************
 *		P3_7.c by GUN		 *
 * 	The program discusses the usage  *
 *	of the conversion specification  *
 *	of scanf function                *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>

int main()
{
	int i, j, k;
	float x, y;
	char dummy;
	char c1, c2, c3, c4;
	char line[10];

	printf("(1) the input : i, j, k\n");
	scanf("%d %o %x", &i, &j, &k);
	printf("the output : i = %d\t, j = %d\t, k = %d\n", i, j, k);

	printf("(2) the input : x, y\n");
	scanf("%f %f", &x, &y);
	printf("the output : x = %f\t, y = %f\n", x,y);

	printf("(3) the input : string, k\n");
	scanf("%*s%d", &k);
	printf("the string = , k = %d\n", k);

	printf("(4) the input : character\n");
	scanf("%c %c %c %c", &c1, &c2, &c3, &c4);
	printf("the output : c1 = %c, c2 = %c, c3 = %c, c4 = %c\n", c1, c2, c3, c4);
	scanf("%c %c %c %c %c", &dummy, &c1, &c2, &c3, &c4);
	printf("the output : dummy=%c c1 = %c c2=%c c3=%c c4=%c\n", dummy, c1, c2, c3, c4);
	printf("(5) the input : line\n");
	scanf("%5s", line);
	printf("the output : line = %s\n", line);

	
}

