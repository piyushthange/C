#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

node *add_at_end(node *ptr, int i);
void printll(node *head);
node *rev_ll(node *head);

int main(int argc, char *argv[])
{
	node *head = (node *)malloc(sizeof(node));
	head->i = 23;
	head->next = NULL;
	
	node *ptr = head;
	ptr = add_at_end(ptr, 89);
	ptr = add_at_end(ptr, 65);
	ptr = add_at_end(ptr, 12);
	ptr = add_at_end(ptr, 38);
	printf("Linked List before reverse\n");
	printll(head);
	printf("Linked List after reverse\n");
	head = rev_ll(head);
	printll(head);

	return 0;
}

node *rev_ll(node *head) {
	node *prev, *nxt;
	prev = NULL;
	
	while (head != NULL) {
		nxt = head->next;
		head->next = prev;
		prev = head;
		head = nxt;
	}
	head = prev;
	return head;
}

node *add_at_end(node *ptr, int i) {
	node *tmp = malloc(sizeof(node));
	tmp->i = i;
	tmp->next = NULL;

	ptr->next = tmp;
	return tmp;
}

void printll(node *head) {
	node *tmp = head;

	if (head == NULL) {
		printf("List is null\n");
		exit(1);
	}

	while (tmp != NULL) {
		printf("%d ", tmp->i);
		tmp = tmp->next;
	}
	printf("\n");
}
