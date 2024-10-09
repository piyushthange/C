#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *a, int len);
void pr(int *a, int len);

int main() {
	int a[] = {3,8,1,6,2,4,9,5,0};
	int len = sizeof(a) / sizeof(a[0]);
	pr(a, len);
	insertion_sort(a, len);
	pr(a, len);

	return 0;
}

void insertion_sort(int *a, int len) {
	for(int i = 1; i < len; i++) {
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key) {
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = key;
	}
}

void pr(int *a, int len) {
	for(int  i = 0; i < len; i++) 
		printf("%d ", a[i]);
	
	printf("\n");
}
