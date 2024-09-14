#include <stdio.h>

int array_sum(int *a, int len);
int avg(int *a, int len);

int main() {
	int arr[] = {1,2,3,4,5,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	int ans = array_sum(arr, len);
	printf("Sum of Array : %d\n", ans);
	printf("Average of Array: %d\n", avg(arr, len));
}

int array_sum(int *a, int len) {
	int sum = 0;
	for (int i =0; i <len; i++) {
		sum = sum + a[i];
	}

	return sum;
}

int avg(int *a, int len) {
	int sum = 0;
	for(int i = 0; i < len; i++)
		sum = sum + a[i];
	
	return sum / len;
}
