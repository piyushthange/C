#include <stdio.h>

int main(int argc, char *argv[])
{
	char name[25];
	gets(name);
	puts("Hello!");
	puts(name);
	return 0;
}
