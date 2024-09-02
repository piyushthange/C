#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct node {
	int i;
	struct node *next;
}node;

void print_ll(node *head);

node *ins_at_begin(node *head, int i); //pass by value
void add_begin(node **head, int d);	// pass by reference

node *add_end(node *ptr, int i);

int main(int argc, char *argv[]) {
	
	node *head = (node *)malloc(sizeof(node));
	head->i = 23;
	head->next = NULL;

	node *ptr = head;
	ptr = add_end(ptr, 10); //ptr points to last node of list;
	ptr = add_end(ptr, 20);
	ptr = add_end(ptr, 30);

	print_ll(head);

	ptr = add_end(ptr, 45);
	head = ins_at_begin(head, 5); //pass by value
	print_ll(head);
	add_begin(&head, 2); //pass by reference
	print_ll(head);
}

void add_begin(node **head, int d) {
	node *ptr = (node *)malloc(sizeof(node));
	ptr->i = d;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
}

node *ins_at_begin(node *head, int i) {
	node *ptr = (node *)malloc(sizeof(node));
	ptr->i = i;
	ptr->next = NULL;

	ptr->next = head;
	head = ptr;
	return head;
}

node *ins_at_pos(node *head, int i, int pos) {
	node *ptr = head;
	node *tmp = (node *)malloc(sizeof(node));
	tmp->i = i;
	tmp->next = NULL;

	pos--;
	while (pos != 1) {
		ptr = ptr->next;
		pos--;
	}
	tmp->next = ptr->next;
	ptr->next = tmp;
}

node *add_end(node *ptr, int i) {
	node *tmp = (node *)malloc(sizeof(node));
	tmp->i = i;
	tmp->next = NULL;

	if (ptr == NULL) {
		printf("List is empty\n");
		exit(1);
	}

	ptr->next = tmp;
	return tmp;
}

void print_ll(node *head) {
	node *ptr = head;
	while(ptr != NULL) {
		printf("%d ", ptr->i);
		ptr = ptr->next;
	}
	printf("\n");
}
