#include <stdio.h>

void fun() {
	static int a = 10;
	++a;
	printf("%d\n", a);
}

int main(int argc, char *argv[]) {
	fun();
	fun();
	fun();

	return 0;
}
