#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct node {
	int i;
	struct node *next;
}node;

void print_ll(node *head);
node *add_end(node *prt, int n);
node *ins_at_pos(node *head, int a, int pos);
node *rev_ll(node *head);
node *del(node *head);

int main(int argc, char *argv[]) {
	
	node *head = (node *)malloc(sizeof(node));
	head->i = 20;
	head->next = NULL;

	node *ptr = head;
	ptr = add_end(ptr, 32);
	ptr = add_end(ptr, 23);
	ptr = add_end(ptr, 4);
	ptr = add_end(ptr, 5);
	ptr = add_end(ptr, 6);

	print_ll(head); // Linked List

	ins_at_pos(head, 7, 4); //insert at position
	print_ll(head);

	head = rev_ll(head); //reverse a linked list
	print_ll(head);

	head = del(head); //free a Linked List
	if(head == NULL)
		printf("Linked List Deleted Successfully\n");
	head = NULL;

	return 0;
}

node *rev_ll(node *head) {
	node *p, *n;
	p = NULL;

	while(head != NULL) {
		n = head->next;
		head->next = p;
		p = head;
		head = n;
	}
	head = p;
	return head;
}

node *del(node *head) {
	node *tmp = head;
	while(tmp != NULL) {
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	return head;
}

node *ins_at_pos(node *head, int a, int pos){
	node *tmp = (node *)malloc(sizeof(node));
	tmp->i = a;
	tmp->next = NULL;

	node *ptr = head;
	for(int i = 0; i < pos - 2; i++) {
		ptr = ptr->next;
	}
	tmp->next = ptr->next;
	ptr->next = tmp;

	return tmp;
}

node *add_end(node *ptr, int n) {
	node *tmp = (node *)malloc(sizeof(node));
	tmp->i = n;
	tmp->next = NULL;

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
