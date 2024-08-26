#include <stdio.h>

int dectobin(int n) {
	int rem, base = 1, bin = 0;

	while (n > 0) {
		rem = n % 2;
		bin = bin + rem * base;
		n = n / 2;
		base = base * 10;
	}
	return bin;
}

int main(int argc, char *argv[]) {

	int a = 10;
	printf("Bin %d\n", dectobin(a));
}
