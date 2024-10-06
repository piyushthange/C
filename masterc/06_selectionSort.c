#include <stdio.h>

void selection_sort(int *a, int len);
void pr(int *a, int len);

int main(int argc, char *argv[]) {
	int a[] = {2,5,3,9,8,1,7,4,6,0};
	int len = sizeof(a) / sizeof(a[0]);
	pr(a, len);
	selection_sort(a, len);
	pr(a, len);

	return 0;
}

void selection_sort(int *a, int len) {
	for(int i = 0; i < len-1; i++) {
		int index = i;
		for (int j = i+1; j < len; j++) {
			if (a[j] < a[index])
				index = j;
		}
		int tmp = a[i];
		a[i] = a[index];
		a[index] = tmp;
	}
}

void pr(int *a, int len) {
	for(int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
