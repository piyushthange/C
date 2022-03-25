#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int *ptr = (int *)malloc(2 * sizeof(int));
	
	if(ptr == NULL){
		printf("Memory cannot be allocated\n");
		exit(1);
	}
	printf("Enter 2 numbers\n");
	for(int i=0; i < 2; i++)
		scanf("%d", ptr + i);
	
	for(int j = 0; j < 2; j++)
		printf("%d ", *(ptr + j));
	printf("\n");
	
	ptr = (int *)realloc(ptr, 4 * sizeof(int));
	if(ptr == NULL){
		printf("Memory cannot be allocated\n");
		exit(1);
	}

	printf("Enter 2 more numbers\n");
	for(int i = 2; i < 4; i++)
		scanf("%d", ptr + i);
	
	for(int j = 0; j < 4; j++)
		printf("%d ", *(ptr + j));
	printf("\n");
	
	return 0;
}
