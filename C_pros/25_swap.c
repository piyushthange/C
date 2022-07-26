#include <stdio.h>

int main(int argc, char *argv[]) {
	long i, k;
	printf("Enter two nums to swap: ");
	scanf("%ld %ld", &i, &k);
	printf("Elements before swap %ld %ld\n", i, k);

	i = i ^ k;
	k = i ^ k;
	i = i ^ k;

	printf("Elements swaped %ld %ld\n", i, k);
	

	return 0;
}
