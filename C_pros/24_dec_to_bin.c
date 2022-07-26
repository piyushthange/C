#include <stdio.h>

int main() {

	long num, dec, base = 1, remain, binary = 0, no_of_1s=0;

	printf("Enter the deciamal integer\n");
	scanf("%ld", &num);
	dec = num;

	while (num > 0) {
		remain = num % 2;

		if (remain == 1)
			no_of_1s++;

		bin = bin + remain * base;
		num = num / 2;
		base = base * 10;
	}

	printf("Input number is = %d\n", dec);
	printf("Converted Binary of %d is %ld\n", dec, bin);
	printf("No. of 1's = %d\n", no_of_1s);
	
	return 0;
}
