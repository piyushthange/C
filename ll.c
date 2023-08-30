#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

void printll(node *head) {
	node *ptr;
	ptr = NULL;
	ptr = head;
	
	while(ptr != NULL) {
		printf("%d ", ptr->i);
		ptr = ptr->next;
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	node *head = (struct node *)malloc(sizeof(node));
	head->i = 23;
	head->next = NULL;

	printll(head);
}
