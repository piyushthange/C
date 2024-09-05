#include <stdio.h>

void rev_arr(int arr[], int len);
void pr(int arr[], int len);

int main() {

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int len = sizeof(arr)/sizeof(arr[0]);
	pr(arr, len);
	rev_arr(arr, len);
	pr(arr, len);

}

void rev_arr(int arr[], int len) {
	for(int i = 0; i < len / 2; i++) {
		arr[i] = arr[i] ^ arr[len - (i+1)];
		arr[len - (i+1)] = arr[i] ^ arr[len - (i+1)];
		arr[i] = arr[i] ^ arr[len - (i+1)];
	}
}

void pr(int arr[], int len){
	for(int i=0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
