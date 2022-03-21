#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

int main(int argc, char *argv[])
{
	node *head = (struct node *)malloc(sizeof(node));
	head->data = 23;
	head->next = NULL;

	node *add = (struct node *)malloc(sizeof(node));
	add->data = 54;
	add->next = NULL;
	head->next = add;

	printf("head->next %p\n", head->next);
	printf("head->next->data %d\n", head->next->data);

	free(add);
	add->data = 89;
	add->next = NULL;
	head->next->next = add;
	printf("head->next->next->data %d\n", head->next->next->data); 
	return 0;
}
