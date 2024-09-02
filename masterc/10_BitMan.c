#include <stdio.h>

void find_all_set_bits(int x);
void first_set_bit(int x);
void num_power_of_2(int x);

int main(int argc, char *argv[]) {
	find_all_set_bits(7);
	first_set_bit(8);
	num_power_of_2(1);

	return 0;
}

void find_all_set_bits(int x) {
	int count = 0;
	while (x != 0) {
		if ((x & 1) != 0) 
			count++;
		x = x >> 1;
	}
	printf("%d\n", count);
}

void first_set_bit(int x) {
	int count = 0;
	while (x != 0) {
		++count;	
		printf("Count %d\n", count);
		if ((x & 1) != 0) {
			x = x >> 1;
			break;
		}
		x = x >> 1;
	}
	printf("%d\n", count);
}

void num_power_of_2(int x) {
	if ((x & (x - 1)) == 0)
		printf("X is power of 2\n");
	else
		printf("X is Not power of 2\n");
}
