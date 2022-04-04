#include <stdio.h>
#include <stdlib.h>

typedef  struct node {
	int i;
	struct node *next;
}node;

node *add_at_end(node *ptr, int data);

int main()
{
	node *head = (node *)malloc(sizeof(node));
	head->i = 88;
	head->next = NULL;

	node *ptr = head;
	ptr = add_at_end(ptr, 23);
	ptr = add_at_end(ptr, 90);
	ptr = add_at_end(ptr, 100);

	ptr = head;

	while(ptr != NULL){
		printf("%d\n", ptr->i);
		ptr = ptr->next;
	}
	
	return 0;
}

node *add_at_end(node *ptr, int data)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->i = data;
	tmp->next = NULL;

	ptr->next = tmp;
	return tmp;
}
