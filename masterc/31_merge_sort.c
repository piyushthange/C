#include <stdio.h>

void merge_sort(int a[], int len);
void merge_sort_recursion(int *a, int l, int r);
void merge_sorted_array(int *a, int l, int m, int r);

int main() {
	int a[] = {3,6,1,4,2,8,5,4,7,0,9};
	int len = sizeof(a) / sizeof(a[0]);

	merge_sort(a, len);

	for(int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}

void merge_sort(int *a, int len) {
	merge_sort_recursion(a, 0, len -1);
}

void merge_sort_recursion(int *a, int l, int r) {
	if(l < r) {
		int m = l + (r - l) / 2;
		merge_sort_recursion(a, l, m);
		merge_sort_recursion(a, m+1, r);

		merge_sorted_array(a, l, m, r);
	}
}

void merge_sorted_array(int *a, int l, int m, int r) {
	int left_len= m - l + 1;
	int right_len = r - m;

	int tmp_lft[left_len];
	int tmp_right[right_len];

	int i, j, k;

	for(int i = 0; i < left_len; i++)
		tmp_lft[i] = a[l + i];
	
	for(int i = 0; i < right_len; i++)
		tmp_right[i] = a[m + 1 + i];
	
	for(i = 0, j =0, k =l; k <= r; k++) {
		if((i < left_len) && (j >= right_len) || tmp_lft[i] <= tmp_right[j]){
			a[k] = tmp_lft[i];
			i++;
		} else {
			a[k] = tmp_right[j];
			j++;
		}
	}
}
