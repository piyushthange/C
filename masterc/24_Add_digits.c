#include <stdio.h>

int add_digits(int x);

int main(){

	int a = add_digits(23455);
	printf("Ans : %d\n", a);

	return 0;
}

int add_digits(int x) {
	while(x > 9){
		int ans = 0, rem;
		while(x != 0){
			rem = x % 10;
			x = x / 10;
			ans = ans + rem;
		}
		x = ans;
	}

	return x;
}
