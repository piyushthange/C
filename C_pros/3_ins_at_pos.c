#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

node *add_end(node *head, int i);
void printll(node *head);
node *ins_at_pos(node *head, int i, int pos);
node *del(node *head);
node *del_last(node *head);

int main(int argc, char *argv[])
{
	node *head = malloc(sizeof(node));
	head->i = 88;
	head->next = NULL;

	node *ptr = head;
	ptr = add_end(ptr, 68);
	ptr = add_end(ptr, 23);
	ptr = add_end(ptr, 12);
	ptr = add_end(ptr, 32);
	ptr = add_end(ptr, 56);
	printll(head);
	ins_at_pos(head, 35, 6);
	ins_at_pos(head, 8, 2);
	printll(head);
	del_last(head);
	printll(head);
	head = del(head);
	
	if (head == NULL)
		printf("List freed success\n");

	return 0;
}

node *del_last(node *head) {
	node *tmp, *tmp2;
	tmp = head;
	tmp2 = head;

	while (tmp->next != NULL) {
		tmp2 = tmp;
		tmp =  tmp->next;
	}
	tmp2->next = NULL;
	free(tmp);
	tmp = NULL;

	return head;
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

node *ins_at_pos(node *head, int i, int pos) {
	node *ptr = head;
	node *ptr2 = malloc(sizeof(node));
	ptr2->i = i;
	ptr2->next = NULL;
	
	pos--;
	while (pos != 1) {
		ptr = ptr->next;
		pos--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
}

void printll(node *head) {
	node *ptr = head;

	if (head == NULL) {
		printf("List empty\n");
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

	if (ptr == NULL) {
		printf("List is empty\n");
		exit(1);
	}

	ptr->next = tmp;
	return tmp;
}
