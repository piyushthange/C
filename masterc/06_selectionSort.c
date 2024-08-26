#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[] = {1,3,7, 9, 0, 2, 8, 4, 5, 6}; 
	//find lowest number
	int len = sizeof(a) / sizeof(a[0]);
	printf("Len %d\n", len);
	for(int i = 0; i < len - 1; i++) {
		int index = i;
		for(int j=i+1; j < len; j++) {
			if(a[j] < a[index])
			index = j;
		}
		a[i] = a[i] ^ a[index];
		a[index] = a[i] ^ a[index];
		a[i] = a[i] ^ a[index];
	}
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}

	printf("\n\n");
	end_selection(a, len);
	printf("\n");

	return 0;
}
