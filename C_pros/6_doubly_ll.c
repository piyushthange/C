#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *prev;
	struct node *next;
}node;

void printll(node *head);

int main(int argc, char *argv[])
{
	node *head = (node *)malloc(sizeof(node));
	head->i = 88;
	head->prev = NULL;
	head->next = NULL;

	node *cur = (node *)malloc(sizeof(node));
	cur->i = 64;
	cur->next = NULL;
	cur->prev = head;
	head->next = cur;
	
	printll(head);

	
	head->next = cur;
	return 0;
}

void printll(node *head) {
	if (head == NULL) {
		printf("LIst Empty\n");
		exit(1);
	}

	node *ptr = head;

	while (ptr != NULL) {
		printf("%d ", ptr->i);
		ptr = ptr->next;
	}
}

