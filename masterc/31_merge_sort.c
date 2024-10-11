#include <stdio.h>

int main() {
	int a[] = {3,6,1,4,2,8,5,4,7,0,9};
	int len = sizeof(a) / sizeof(a[0]);

	merge_sort(a, len);

	for(int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}

