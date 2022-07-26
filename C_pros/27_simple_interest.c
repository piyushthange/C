#include <stdio.h>

int main(int argc, char *argv[]) {
	float p, r, si;
	int t;

	printf("Enter Principal amount, Rate, Time: ");
	scanf("%f %f %d", &p, &r, &t);

	si = (p * r * t) / 100;

	printf("Simple Interest: %5.2f\n", si);

	return 0;
}
