#include <stdio.h>

int main(int argc, char *argv[]) {
	int p,n;
	float r,si;

	p = 1000;
	n = 3;
	r = 8.5;

	si = p * r * n / 100;

	printf("%f\n", si);
	return 0;
}
