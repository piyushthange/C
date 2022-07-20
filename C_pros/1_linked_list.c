#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

void printll(node *head);
void addtoend(node *head, int i);
void rev_ll(node *head);
node *add_at_end(node *ptr, int i);

int main(int argc, char *argv[])
{
	node *head = (node *)malloc(sizeof(node));
	head->i = 23;
	head->next = NULL;

	addtoend(head, 89);
	addtoend(head, 238);
	addtoend(head, 9982);
	printll(head);
//	rev_ll(head);

	return 0;
}

void printll(node *head) {
	node *ptr;
	ptr = NULL;
	ptr = head;

	while (ptr != NULL) {
		printf("%d ", ptr->i);
		ptr = ptr->next;
	}
	printf("\n");
}

void addtoend(node *head, int i) {
	node *tmp, *ptr;
	ptr = malloc(sizeof(node));
	ptr->i = i;
	ptr->next = NULL;
	tmp = head;

	while (tmp->next != NULL)
		tmp = tmp->next;
	
	tmp->next = ptr;
}

node *add_at_end(node *ptr, int i) {
	node *tmp = malloc(sizeof(node));
	tmp->i = i;
	tmp->next = NULL;

	ptr->next = tmp;
	return tmp;
}
