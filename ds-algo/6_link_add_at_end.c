#include <stdio.h>
#include <stdlib.h>

void addtoend(int value);
void print_list(node *head);

typedef struct node{
	int data;
	struct node *next;
}node;

int main(int argc, char *argv[])
{
	addtoend(56);
//	addtoend(289);
//	addtoend(87);
//	print_link(&head);
	return 0;
}

void addtoend(int value)
{
	node *p;
	node *head = (struct node *)malloc(sizeof(node));
	head->data = 23;
	head->next = NULL;
	p = (struct node *)malloc(sizeof(node));
	p->data = value;
	p->next = NULL;

	if(head == NULL)
		head = p;
	else{
		node *tmp = head;
		while(tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = p;
	}
	printf("Insertion at end successfull\n");
}

void print_list(int head)
{
	node *tmp = head;
	while(tmp->next != NULL)
		printf("%d ", tmp->data);
	
	printf("\n");
}
