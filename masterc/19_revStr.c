#include <stdio.h>
#include <string.h>

void rev_string(char *name);
void rev_arr(int *arr, int len);
void pr(int *arr, int len);
int main() {
	
	char s[] = "PIYUSH Thange";
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(a) / sizeof(a[0]);

	rev_string(s);
	printf("%s\n", s);
	pr(a, len);
	rev_arr(a, len);
	pr(a, len);
	
	return 0;
}
void pr(int *arr, int len) {
	for(int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void rev_arr(int *arr, int len) {
	int mid = len / 2;
	for(int i=0; i< mid; i++){
		arr[i] = arr[i] ^ arr[len - i];
		arr[len - i] = arr[i] ^ arr[len - i];
		arr[i] = arr[i] ^ arr[len - i];
	}
}

void rev_string(char *name) {
	int len = strlen(name);
	int mid = len / 2;
	char tmp;
	for (int i = 0; i < mid; i++) {
		tmp = name[i];
		name[i] = name[len - i - 1];
		name[len - i - 1] = tmp;
	}
}
