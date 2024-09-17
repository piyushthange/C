#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

typedef struct double_ll {
	int i;
	struct double_ll *n;
	struct double_ll *p;
}dnode;

node *add_ele(node *ptr, int i);
void pr(node *head);
void pr_dll(dnode *head);
node *del(node *head);
node *ins_at_pos(node *head, int i, int pos);
dnode *add_end(dnode *head, int i);

int main() {
	node *head = (node *)malloc(sizeof(node));
	head->i = 10;
	head->next = NULL;
	
	node *ptr = head;
	ptr = add_ele(ptr, 20);
	ptr = add_ele(ptr, 30);
	ptr = add_ele(ptr, 40);
	ptr = add_ele(ptr, 50);
	pr(head);
	ins_at_pos(head, 60, 2);
	pr(head);

	head = del(head);

	if(head == NULL)
		printf("Linked List Deleted Successfully\n");

	//Double linked list
	printf("\n Doubly Linked List\n");
	dnode *h = (dnode *)malloc(sizeof(dnode));
	h->i = 1;
	h->n = NULL;
	h->p = NULL;

	dnode *dptr = h;
	dptr = add_end(dptr, 20);
	dptr = add_end(dptr, 21);
	dptr = add_end(dptr, 22);
	dptr = add_end(dptr, 23);
	pr_dll(h);

	return 0;
}

dnode *add_end(dnode *head, int i) {
	dnode *ptr = (dnode *)malloc(sizeof(dnode));
	ptr->n = NULL;
	ptr->p = NULL;
	ptr->i = i;

	head->n = ptr;
	ptr->p = head;
	ptr = head;
	return ptr;
}

node *ins_at_pos(node *head, int i, int pos) {
	node *ptr = (node *)malloc(sizeof(node));
	ptr->i = i;
	ptr->next = NULL;
	node *tmp = head;

	pos--;
	while(pos != 1) {
		tmp = tmp->next;
		pos--;
	}
	ptr->next = tmp->next;
	tmp->next = ptr;

}
node *add_ele(node *ptr, int i) {
	node *tmp = (node *)malloc(sizeof(malloc));
	tmp->i = i;
	tmp->next = NULL;

	ptr->next = tmp;
	ptr = tmp;
	return tmp;
}

node *del(node *head) {
	node *tmp = head;

	while(tmp != NULL) {
		tmp = tmp->next;
		free(head);
		head = tmp;
	}

	return head;
}

void pr(node *head) {
	node *ptr = head;
	while (ptr != NULL){
		printf("%d ", ptr->i);
		ptr = ptr->next;
	}
	printf("\n");
}

void pr_dll(dnode *head) {
	dnode *ptr = head;
	while(ptr != NULL) {
		printf("%d ", ptr->i);
		ptr = ptr->n;
	}
	printf("\n");
}

void as(char *s) {
	
	for (int i = 0; s[i] == '0' && s[i] == '9'; ++i){
		
	}
}
