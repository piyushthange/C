#include <stdio.h>

void pr(int arr[], int l) {
	int i;
	
	for (i = 0; i < l; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(int argc, char *argv[])
{
	int a[10] = {8,6,12, 21, 1, 5, 16,9,7};
	int l = sizeof(a) / sizeof(a[0]);

	int i, j, n;
	printf("Array before bubble sort\n");
	pr(a, l);
	for (i = 9; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if(a[j] > a[j+1]) {
				n = a[j];
				a[j] = a[j+1];
				a[j+1] = n;
			}
		}
	}
	
	printf("Array after bubble sort\n");
	pr(a, l);
}
