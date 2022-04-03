#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

void count_node(node *head);

int main(int agrc, char *argv[])
{
	node *head = NULL;
	head = (node *)malloc(sizeof(node));
	head->i = 32;
	head->next = NULL;

	node *cu = NULL;
	cu = (node *)malloc(sizeof(node));
	cu->i = 89;
	cu->next = NULL;
	head->next = cu;
	printf("head->next->i : %d\n", head->next->i);
	
	free(cu);

	cu->i = 28;
	cu->next = NULL;
	head->next->next = cu;
	printf("head->next->next %d\n", head->next->next->i);
	free(cu);
	count_node(head);

	return 0;
}

void count_node(node *head)
{
	int count = 0;
	
	if(head == NULL)
		printf("List is empty\n");
	
	node *ptr = NULL;
	ptr = head;
	while(ptr != NULL){
		count++;
		ptr = ptr->next;
	}
	printf("%d\n", count);
}
