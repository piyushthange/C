#include <stdio.h>

int max_num (int *a, int len);
	
int main() {

	int arr[] = {2, 3, 6, 5, 4, 1, 9, 8, 0};
	int len = sizeof(arr) / sizeof(arr[0]);
	int ans = max_num(arr, len);
	printf("Maximum Number: %d\n", ans);
	
	return 0;
}

int max_num (int *a, int len) {
	int k = a[0];

	for(int i = 0; i < len; i++) {
		if (a[i] > k)
			k = a[i];
	}

	return k;
}
