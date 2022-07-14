#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *ptr;
	ptr =(char *)malloc(25);

	if (ptr == NULL)
		exit(1);
	
	strcpy(ptr, "hello there");
	printf("%s\n", ptr);

	free(ptr);

	return 0;
}
