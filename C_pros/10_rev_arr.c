#include <stdio.h>
#include <stdlib.h>

void rev_arr(int arr[], int start, int end) {
	int tmp;

	while (start < end) {
		tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
		start++;
		end--;
	}
}

void print_arr(int arr[], int arr_len) {
	int i;
	for (i = 0; i < arr_len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(int argc, char *argv[]) {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int arr_len, start, end;
	arr_len = sizeof(arr) / sizeof(arr[0]);
	start = 0;
	end = arr_len - 1;
	rev_arr(arr, start, end);
	print_arr(arr, arr_len);
	
	return 0;
}
