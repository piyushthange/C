#include <stdio.h>

struct a{
	char b;
	int a;
	char c;
};

struct ds{
	int short dd;
	char a;
	float dw;
	double de;
};

int main(int argc, char *argv[]) {
	struct a ab;
	struct ds deo;
	printf("%ld\n", sizeof(ab));
	printf("%ld\n", sizeof(deo));
	return 0;
}
