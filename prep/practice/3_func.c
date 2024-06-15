#include <stdio.h>

void meow(int n);

int main(int argc, char *argv[])
{
	meow(3);

	return 0;
}

void meow(int n)
{
	for(int i = 0; i < n; i++) {
		printf("meow\n");
	}
}
