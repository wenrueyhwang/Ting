#include <stdio.h>
#include <string.h>

struct Person
{
	unsigned int age : 3;
	unsigned int number : 4;
	unsigned int code : 5;
};

int main()
{
	struct Person person;

	person.age = 6;
	printf("sizeof(person) = %d\n", sizeof(person));
	printf("person.age = %u \n", person.age);
	person.number = 150;
	printf("person.number = %u \n", person.number);
	person.code =  5;
	printf("person.code = %u \n", person.code);
}

