#include <stdio.h>
#include <string.h>

union Data
{
	int i;
	float f;
	char str[30];
};

int main()
{
	union Data data;
	data.i = 10;
	printf("data.i = %d\n", data.i);
	data.f = 25.69;
	printf("data.f = %f\n", data.f);
	strcpy(data.str, "This is a c language.");
	printf("data.str = %s\n", data.str);
}

