#include <stdio.h>
#include <stdbool.h>

bool check_parity(int x);

int main() {
	
	if(check_parity(32))
		printf("The parity is odd\n");
	else
		printf("The parity is even\n");
	
}

bool check_parity(int x) {
	bool parity = false;

	while(x) {
		parity = !parity;

		x = x & (x - 1);
	}

	return parity;
}
