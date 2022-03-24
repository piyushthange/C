#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, n;
	printf("Enter how many integres you want: ");
	scanf("%d", &n);

	int *ptr = (int *)malloc(n * sizeof(int));

	if(ptr == NULL){
		printf("Memory cannot be allocated\n");
		exit(1);
	}

	for(i = 0; i < n; i++){
		printf("Enter the %d number: ", i);
		scanf("%d", ptr + i);
	}
	
	for(i = 0; i < n; i++)
		printf("The %d in the heap is: %d\n", i, *(ptr + i));
	
	return 0;
}
