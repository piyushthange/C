#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	printf("Enter number to check: ");
	scanf("%d", &i);

	if (i % 2 == 0)
		printf("Even\n");
	else
		printf("Odd\n");

	return 0;
}
