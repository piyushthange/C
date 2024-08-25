#include <stdio.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c != 0)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
	
	return 0;
}
