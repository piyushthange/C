#include <stdio.h>

int occur(int *a, int len, int num);

int main() {
	
	int arr[] = {1, 2, 1, 3,2,4,5,1, 2, 3,1};
	int len = sizeof(arr) / sizeof(arr[0]);

	int ans = occur(arr, len, 2);
	printf("Occurences of %d : %d\n", 2, ans);

	return 0;
}

int occur(int *a, int len, int num) {
	int count = 0;

	for(int i = 0; i < len; i++) {
		if(a[i] == num)
			count++;
	}

	return count;
}
