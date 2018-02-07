/*****************************************
 *		Pfunction1.c  by GUN 	 *
 * 	Callback function using pointer  *
 * 	function 			 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void (*Func)(int, int, int);

void add(int, int, int);
void sub(int, int, int);

int main()
{
	Func func[]={[0 ... 9] = add};
	func[4] = sub;
	int i;
	for(i=0; i<10; i++) func[i](i, i+10, i+2);
}
void add(int index, int a, int b)
{
	printf("%d, %d + %d = %d\n", index, a, b, a+b);
}
void sub(int index, int a, int b)
{
	printf("%d, %d - %d = %d\n", index, a, b, a-b);
}

