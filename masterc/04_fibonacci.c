#include <stdio.h>

void iterative(int a);
int recursive(int a);

int main(int argc, char *argv[]) {
	//iterative(6);
	int fib = 0;
	int len = 0;
	scanf("%d", &len);
	for(int i = 0; i < len; i++) {
		printf("%d", recursive(i));
		if (i != (len - 1))
			printf(",");
		else
			printf("\n");
	}

}

int recursive(int a) {
	if (a > 1)
		return recursive(a-1) + recursive(a-2);
	else if (a == 1) 
		return 1;
	else if (a ==0)
		return 0;
	else {
		printf("Error: n must be >=0\n");
		return -1;
	}
}

void iterative(int a) {
	int t1 = 0;
	int t2 = 1;
	int fib = 0;
	int len = 0;
	

	scanf("%d", &len);

	for(int i = 2; i < len; i++) {
		fib = t1 + t2;
		printf("%d", fib);
		t1 = t2;
		t2 = fib;

		if (i != (len - 1)) printf(",");
		else printf("\n");
	}

}
