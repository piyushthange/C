#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct node {
	int i;
	struct node *next;
}node;

void printll(node *head);
void add(node *head, int i);
node *revll(node *head);

int main(int argc, char *argv[]) 
{
	node *head = (node *)malloc(sizeof(node));
	head->i = 23;
	head->next = NULL;

	printll(head);
	add(head, 99);
	add(head, 2);
	add(head, 12);
	printll(head);
	head = revll(head);
	printll(head);
	
	return 0;
}

void printll(node *head)
{
	node *ptr = NULL;
	ptr = head;

	while (ptr != NULL) {
		printf("%d ", ptr->i);
		ptr = ptr->next;
	}
	printf("\b\b\n");
}

void add(node *head, int i) {
	node *ptr, *tmp;
	ptr = (node *)malloc(sizeof(node));
	ptr->i = i;
	ptr->next = NULL;
	tmp = head;

	while (tmp->next != NULL)
		tmp = tmp->next;
	
	tmp->next = ptr;
}

node *revll(node *head) {
	node *p, *n;
	p = NULL;

	while (head != NULL) {
		n = head->next;
		head->next = p;
		p = head;
		head = n;
	}
	head = p;
	return head;
}

void showbits(unsigned char) {
	unsigned char  j, k, mask;

	for (int i = 7; i >=0; i--) {
		j = i;
		mask = 1 << j;
		k = n & mask;
		k == 0 ? printf("0") : printf("1");
	}
}


