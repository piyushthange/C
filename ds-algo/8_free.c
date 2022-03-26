#include <stdio.h>
#include <stdlib.h>

int *input()
{
	int *ptr, i;
	ptr = (int *)malloc(5 * sizeof(int));
	printf("Enter 5 numbers\n");
	for(i = 0; i < 5; i++)
		scanf("%d", ptr + i);
	
	return ptr;
}

int main(int argc, char *argv[])
{
	int i, sum = 0;
	int *ptr = input();
	printf("The memory location of ptr is %p\n", &ptr);

	printf("The memory location of ptr is %p\n", ptr);
	printf("The memory location of ptr+1 is %p\n", ptr + 1);
	printf("The memory location of ptr+2 is %p\n", ptr + 2);
	printf("The memory location of ptr+3 is %p\n", ptr + 3);
	printf("The memory location of ptr+4 is %p\n", ptr + 4);
	for(i = 0; i < 5; i++)
		sum += *(ptr + i);
	
	printf("Sum is: %d\n", sum);
	free(ptr);
	ptr = NULL;
	return 0;
}
