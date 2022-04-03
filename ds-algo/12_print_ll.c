#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

void print(node *head);

int main(int argc, char *argv)
{
	node *head = (node *)malloc(sizeof(node));
	head->i = 29;
	head->next = NULL;

	node *cu = (node *)malloc(sizeof(node));
	cu->i = 28;
	cu->next = NULL;
	head->next = cu;
	
	cu = (node *)malloc(sizeof(node));
	cu->i = 64;
	cu->next = NULL;
	head->next->next = cu;

	printf("head->next->next->i : %d\n", head->next->next->i);
	print(head);

	return 0;
}

void print(node *head)
{
	if(head == NULL)
		printf("List empty\n");
	
	node *ptr = NULL;
	ptr = head;
	while(ptr != NULL) {
		printf("%d\n", ptr->i);
		ptr = ptr->next;
	}
}
