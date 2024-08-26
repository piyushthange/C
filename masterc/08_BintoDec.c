#include <stdio.h>

int bintodec(int n) {
	int rem, base = 1, dec;

	while (n > 0) {
		rem = n % 10;
		dec = dec + rem * base;
		n = n / 10;
		base = base * 2;
	}
	return dec;
}

int dectobin(int n) {
	int rem, base = 1, bin = 0;

	while (n > 0) {
		rem = n % 2;
		bin = bin + rem * base;
		n = n / 2;
		base  = base * 10;
	}
	return bin;
}

int main(int argc, char *argv[]) {
	int a = 1100;
	int b = 2;
	printf("Dec %d\n", bintodec(a));
	printf("bin %d\n", dectobin(b));

	return 0;
}
