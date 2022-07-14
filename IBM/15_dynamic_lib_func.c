/* creating the dynamic shared library of this function
 * gcc -shared -o libfunc.so func.c
 */
#include <stdio.h>

int add(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}
