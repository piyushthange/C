#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, j, k;
	
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &i, &j, &k);

	if (i > j && i > k)
		printf("Num 1 is largest number\n");
	else if (j > i && j > k)
		printf("Num 2 is largest number\n");
	else
		printf("Num 3 is largest number\n");
	
	return 0;
}
