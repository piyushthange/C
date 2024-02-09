#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Argument Count: %d\n", argc);
	int i = 0;
	while (i < argc) {
		printf("Argument %d is %s\n", i, argv[i]);
		i++;
	}
	return 0;
}
