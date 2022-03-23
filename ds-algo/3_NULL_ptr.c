#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int *ptr;
	ptr = (int *)malloc(2 * sizeof(int));
	printf("The value returned by ptr is %p\n", ptr);
	printf("The value returned by ptr is %d\n", *ptr);
	
	if(ptr == NULL)
		printf("Memory cannot be allocated\n");
	else
		printf("Memory allocated successfully\n");
	
	return 0;
}
