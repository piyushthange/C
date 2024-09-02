#include <stdio.h>
#include <sys/types.h>

union endian_check {
	char c;
	unsigned int i;
};

int main(int argc, char *argv[]) {
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c != 0)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
	

	// endian by union
	union endian_check un;
	un.i = 0x01;
	
	if (un.c == 1)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
	return 0;
}
