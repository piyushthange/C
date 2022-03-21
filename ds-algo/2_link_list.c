#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

int main(int argc, char *argv[])
{
	int num;
	printf("Enter the number of nodes you want: ");
	scanf("%d", &num);

	node *head = (struct node *)malloc(sizeof(node));
	int n_size = sizeof(node);
	int i = 20;
	int *ptr = &i;
	printf("ptr size %ld\n", sizeof(ptr));
	printf("Node size: %d\n", n_size);

	return 0;
}
