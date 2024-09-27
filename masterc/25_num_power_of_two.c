#include <stdio.h>
#include <stdlib.h>

int check(int x);

int main() {
	
	int a = check(31);
	if(a == 0)
		printf("x is powerof 2\n");
	else
		printf("x is  not power of 2\n");
}

int check(int x) {
	while(x != 1) {
		if(x % 2 == 1)
			return 1;

		x  = x / 2;
	}
	return 0;
}
