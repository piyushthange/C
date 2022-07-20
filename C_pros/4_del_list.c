#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

node *add_end(node *ptr, int i);
void printll(node *head);
node *del(node *head);

int main(int argc, char *argv[])
{
	node *head = malloc(sizeof(node));
	head->i = 48;
	head->next = NULL;

	node *ptr = head;
	ptr = add_end(ptr, 23);
	ptr = add_end(ptr, 66);
	ptr = add_end(ptr, 83);
	printll(head);
	head = del(head);

	if (head == NULL)
		printf("List Deleted Successfully\n");


	return 0;
}

node *del(node *head) {
	node *tmp = head;

	while (tmp != NULL) {
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	return head;
}

void printll(node *head) {
	node *ptr = head;

	if (head == NULL) {
		printf("list empty\n");
		exit(1);
	}

	while (ptr != NULL) {
		printf("%d ", ptr->i);
		ptr = ptr->next;
	}
	printf("\n");
}

node *add_end(node *ptr, int i) {
	node *tmp = malloc(sizeof(node));
	tmp->i = i;
	tmp->next = NULL;

	ptr->next = tmp;
	return tmp;
}
