/* Linking the dynamic library to the main binary
 * first off create a environment variable so as to
 * get the value.
 * if something exists int $LD_LIBRARY_PATH
 * export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
 * else if empty
 * export LD_LIBRARY_PATH=.
 * gcc -o main main.c -L. -lfunc
 */ 
#include <stdio.h>

int add(int a, int b);

int main() {
	int a = 15, b = 23;
	int sum;

	sum = add(a, b);
	printf("Sum : %d\n", sum);
	return 0;
	
}
