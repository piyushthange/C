#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

void add_to_end(node *head, int data);
void print(node *head);
int main(int argc, char *argv[])
{
	node *head = (node *)malloc(sizeof(node));
	head->i = 84;
	head->next = NULL;
	
	add_to_end(head, 23);
	add_to_end(head, 91);
	add_to_end(head, 65);
	add_to_end(head, 78);

	print(head);

	return 0;
}

void add_to_end(node *head, int data)
{
	if(head == NULL)
		printf("Empty list\n");
	node *ptr, *tmp;
	ptr = head;

	tmp = (node *)malloc(sizeof(node));
	tmp->i = data;
	tmp->next = NULL;

	while(ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = tmp;
}

void print(node *head)
{
	if(head == NULL)
		printf("Empyt list\n");

	node *ptr = head;
	while(ptr != NULL) {
		printf("%d\n", ptr->i);
		ptr = ptr->next;
	}
}
