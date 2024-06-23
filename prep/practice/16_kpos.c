#include <stdio.h>

int main() {
	int num = 171, k = 5, p = 2;
	printf("1 << k : %d\n", 1 << k);
	printf("(1 << k) - 1 : %d\n", (1 << k) - 1);
	printf("p - 1 : %d\n", p - 1);
	printf("num >> (p - 1) : %d\n", num >> (p - 1));
	printf("%d\n", ((1 << k) - 1) & (num >> (p - 1)));
	return (1 << k);
}
