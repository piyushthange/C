#include <stdio.h>

int main() {
	int c;

	while (c = getchar() != EOF) {
		putchar(c);
		printf("%d\n", c);
	}
	printf("%d\n",c);
}
