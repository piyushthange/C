#include <stdio.h>

typedef struct
{
	char *name;
	char *number;
}person;

int main(int argc, char *argv[])
{
	person people[3];

	people->name = "Piyush";
	people->number = "123";

	printf("%s\n", people->name);
	
	return 0;
}
