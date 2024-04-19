#include <stdio.h>

int sum(int n);
int factorial(int a);

int main(int argc, char *argv[]) {
	
	//print power to int
	int a, pow, num;
	printf("Enter a Number & power: ");
	scanf("%d", &a);
	scanf("%d",&pow);
	//scanf ("%d %d", &a, &pow);
	num = a;

	for (int i=1; i < pow; i++){
		num = num * a;
	}
	printf ("%d\n", num);

	int asdf = sum(3);
	printf("%d\n", asdf);
	factorial(4);

	return 0;
}

int sum(int n) {
	int s = 0;
	for (int i = 0; i <= n; i++) {
		s = s + i;
	}
	printf("%d\n", s);
	// next format
//	s = (n * (n+1))/2;
	return s;
}

int factorial(int a) {
	int s= a;
	for (int i=1; i < s; i++) {
		s = s * i;
	}

}
