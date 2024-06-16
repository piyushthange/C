#include <stdio.h>

int main(int arc, char *argv[]) {
	int arr[] = {20, 50, 1, 389, 29, 2, 48};

	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < 7; i++) {
		if (arr[i] == n) {
			printf("Found\n");
			return 0;
		}
	}
	printf("Not Found\n");
	return 1;
}
