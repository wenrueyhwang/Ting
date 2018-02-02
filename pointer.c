#include <stdio.h>

int main()
{
	int var1 = 10, i;
	int *ptr1 = &var1;
	char *ptr, var2[] = "this is a test characters.";
	ptr = var2;

	printf("The address of var1 = %p\n", &var1);
	printf("The address of var2 = %p\n", var2);
	printf("The content of var1 = %d\n", var1);
	printf("The content of var2 = %c\n", *(var2));
	for(i = 0; i < 6 ; i++)
		printf("%p\n", ptr1++);
	for(i = 0; *ptr !='\0'; i++)
		printf("%p\n", ptr++);
}

