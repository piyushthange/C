#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int i;
	struct node *next;
}node;

int main(int argc, char *argv[])
{
	node *head = (struct node *)malloc(sizeof(node));
	head->i = 23;
	/* *(head).i */
	head->next = NULL;

	printf("head->i : %d\n", head->i);
	printf("(*head).i : %d\n", (*head).i);
	printf("head->next : %p\n", head->next);
	
	return 0;
}
