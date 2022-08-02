#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i, n1, n2, count = 0, sum = 0;

	printf("Enter num1 & num2: ");
	scanf("%d %d", &n1, &n2);

	for ( i = n1; i < n2; i++)
		if (i % 5 == 0) {
			printf("%3d", i);
			count++;
			sum = sum + i;
		}
	
	printf("\n Number of integers divisible by 5 between %d & %d = %d\n", n1, n2, count);
	printf("Sum of all the ints is %d\n", sum);

	return 0;
}
