#include <stdio.h>
#include <stdlib.h>

int sum(int n);
int factorial(int a);
int prime(int a);
int pat1(int a);
int pat2(int a);
int pw(int a, int b);
void scan_print();
void size_of();

int main(int argc, char *argv[]) {
	
	//factorial(4);
//	prime(7);
//	prime(12);
//	prime(1);
//	pat1(5);
//	pat2(5);
//	scan_print();
	
	size_of();

	return 0;
}

int pw(int a, int b) {
	int r, pw, num;
	printf("Enter a Number & power: ");
	scanf("%d", &r);
	scanf("%d",&pw);
//	scanf ("%d %d", &a, &pow);
	int s = r;
	for (int i = 1; i < b; i++) {
		s = s * s;
	}
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

int prime(int a) {
	int s = a;
	if (s < 2) {
		printf("Nor prime nor composite\n");
		return 0;
	}else {
		for (int i = 2; i < s; i++) {
			if (s % i == 0) {
				printf("Not prime no\n");
				return 0;
			}
		}

		printf("Prime Number\n");
		return 0;
	}
}

// Matrix pattern 
int pat1(int a) {
	for(int i=0; i < a; i++) {
		for (int j=0; j < a; j++) {
			printf("*");
		}
		printf("\n");
	}
}

//pattern 2
int pat2(int a) {
	for (int i = 0; i < a; i++) {
		for (int j=0; j < a; j++) {
			printf("%d ", i);
		}
		printf("\n");
	}
}

void scan_print() {
	char s[25];
	scanf("%s", s);
	printf("%s\n", s);
}


void size_of() {
	printf("int %ld\n", sizeof(int));
	printf("void %ld\n", sizeof(void));
	printf("void *%ld\n", sizeof(void *));
	printf("float%ld\n", sizeof(float));
	printf("double%ld\n", sizeof(double));
	printf("char %ld\n", sizeof(char));
	printf("unsigned int%ld\n", sizeof(unsigned int));
}
