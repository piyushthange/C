#include <stdio.h>

void swap(int *a, int *b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main(int argc, char *argv[]) {
	int i = 9, k = 29;
	printf("i = %d, k = %d\n", i, k);
	swap(&i,&k);
	printf("i = %d, k = %d\n", i, k);

	return 0;
}
