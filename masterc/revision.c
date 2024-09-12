#include <stdio.h>

union ab{
	char a;
	unsigned int i;
};

int main() {
	union ab endian;
	endian.i = 1;

	if (endian.a == 1) {
		printf("Little Endian\n");
	}else
		printf("Big Endian\n");

	return 0;
}
