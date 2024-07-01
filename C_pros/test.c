#include <stdio.h>

void change(int *b, int n);

int main()
{
	float a[] = {12.32, 2.9, 83.12, 38.99, 13.95};
	float *j;
	j = a;
	j = j + 4;
	printf("%p %p %f %f\n", j, &a[4], *j, a[4]);

	return 0;
}
void change(int *b, int n) {
	int i;
	for (i = 0; i < n; i++) {
		*(b + i) = *(b + i) + 5;
	}
}
