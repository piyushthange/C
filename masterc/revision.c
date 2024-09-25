#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int i;
	struct node *next;
}node;

node *add_end(node *ptr, int i);
node *add_begin(node *head, int i);
node *del(node *head);
node *ins_at_pos(node *head, int i, int pos);
node *rev(node *head);
void pr(node *head);

int main() {
	node *head = (node *)malloc(sizeof(node));
	head->i = 22;
	head->next = NULL;

	node *ptr = head;
	ptr = add_end(ptr, 10);
	ptr = add_end(ptr, 20);
	ptr = add_end(ptr, 30);
	ptr = add_end(ptr, 40);
	ptr = add_end(ptr, 50);
	ptr = add_end(ptr, 60);

	pr(head);

	ins_at_pos(head, 2, 2);

	pr(head);

	head = rev(head);
	pr(head);

	head = add_begin(head, 55);
	pr(head);

	head = del(head);
	pr(head);

	if(head == NULL) 
		printf("Linked List Deleted Successfully\n");

	return 0;
}

node *add_begin(node *head, int i) {
	node *ptr = (node *)malloc(sizeof(node));
	ptr->i = i;
	ptr->next = NULL;

	ptr->next = head->next;
	head = ptr;
	return head;
}

node *rev(node *head) {
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

node *ins_at_pos(node *head, int i, int pos) {
	node *tmp = (node *)malloc(sizeof(node));
	node *ptr = head;
	tmp->i = i;
	tmp->next = NULL;

	pos--;
	for(int k = 0; k < pos - 1; k++) {
		ptr = ptr->next;
	}

	tmp->next = ptr->next;
	ptr->next = tmp;
	return ptr;
}

node *add_end(node *ptr, int i) {
	node *tmp = (node *)malloc(sizeof(node));
	tmp->i = i;
	tmp->next = NULL;

	ptr->next = tmp;
	ptr = tmp;
	return ptr;
}

node *del(node *head) {
	node *tmp = head;
	while (tmp != NULL) {
		tmp = head->next;
		free(head);
		head = tmp;
	}

	return tmp;
}

void pr(node *head) {
	node *ptr = head;

	while (ptr != NULL) {
		printf("%d ", ptr->i);
		ptr = ptr->next;
	}
	printf("\n");
}
