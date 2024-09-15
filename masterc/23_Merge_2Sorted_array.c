#include <stdio.h>

void merge(int *a, int a_len, int *b, int b_len, int *c);
void pr(int *a, int len);

int main() {
	int a[] = {1,3,5,7,9};
	int b[] = {2,4,5,6,8,10,11,12};
	int a_len = sizeof(a) / sizeof(a[0]);
	int b_len = sizeof(b) / sizeof(b[0]);
	int c_len = a_len + b_len;
	int c[c_len];
	
	merge(a, a_len, b, b_len, c);
	printf("Array a : ");
	pr(a, a_len);
	printf("Array b : ");
	pr(b, b_len);
	printf("Array c : ");
	pr(c, c_len);
	return 0;
}

void merge(int *a, int a_len, int *b, int b_len, int *c) {
	int i = 0, j = 0, k = 0;

	while (i < a_len && j < b_len) {
		if(a[i] < b[j]) {
			c[k] = a[i];
			i++;
			k++;
		} else {
			c[k] = b[j];
			j++;
			k++;
		}
	}

	while(i < a_len) {
		c[k] = a[i];
		i++;
		k++;
	}

	while(j < b_len) {
		c[k] = b[j];
		j++;
		k++;
	}
}

void pr(int *a, int len) {
	for(int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}
