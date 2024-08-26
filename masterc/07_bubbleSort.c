#include <stdio.h>

void bubble(int a[], int len);
void pr(int a[], int len);

int main(int argc, char *argv[]) {
	int a[] = {4, 5, 8, 3, 9, 2, 1, 0};
	int len = sizeof(a) / sizeof(a[0]);

	pr(a, len);
	bubble(a, len);
	pr(a, len);
	
	return 0;
}

void bubble(int a[], int len) {
	for (int i = len - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if(a[j] > a[j+1]) {
				a[j] = a[j] ^ a[j+1];
				a[j+1] = a[j] ^ a[j+1];
				a[j] = a[j] ^ a[j+1];
			}
		}
	}
}

void pr(int a[], int len) {
	for(int i = 0; i < len; i++) 
		printf("%d ", a[i]);
	printf("\n");
}
