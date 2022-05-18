#include <stdio.h>

int add(int a, int b) {
	int tot;
	tot = a + b;

	return tot;
}

int main(){

	int a, b;
	int sum;
	a = 10;
	b = 29;
	
	sum = add(a, b);

	printf("sum = %d\n", sum);
	return 0;
}
