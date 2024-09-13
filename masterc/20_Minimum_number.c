#include <stdio.h>

int min_num(int *a, int len);

int main() {
	
	int arr[] = {3,2,8,9,7,1,5,6,4};
	
	int len = sizeof(arr)/sizeof(arr[0]);

	int ans = min_num(arr, len);
	printf("Mininum Number : %d\n", ans);


}

int min_num(int *a, int len) {
	int k = a[0];

	for(int i = 0; i < len; i++) {
		if (a[i] < k)
			k = a[i];
	}
	return k;
}
