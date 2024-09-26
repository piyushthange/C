#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int i;
	struct node *next;
}node;

node *add_begin(node *head, int i); //pass by value
void add_to_begin(node **head, int d); //pass by reference

node *add_end(node *ptr, int i);
node *del(node *head); //delete complete list
node *del_first_node(node *head);
node *del_last_node(node *head);
void del_last_node_single_pointer(node *head);
void del_at_pos(node *head, int pos);
node *ins_at_pos(node *head, int i, int pos);
node *rev(node *head);
void pr(node *head);

int main() {
	node *head = (node *)malloc(sizeof(node));
	head->i = 22;
	head->next = NULL;

	node *ptr = head;
	ptr = add_end(ptr, 10);
	ptr = add_end(ptr, 20);
	ptr = add_end(ptr, 30);
	ptr = add_end(ptr, 40);
	ptr = add_end(ptr, 50);
	ptr = add_end(ptr, 60);

	printf("Addded Elemenst : ");
	pr(head);

	printf("Insert at position : ");
	ins_at_pos(head, 2, 2);
	pr(head);

	printf("Reverse Linked List : ");
	head = rev(head);
	pr(head);

	printf("Add node at Begining using PASS BY VALLUE\n");
	head = add_begin(head, 55);
	pr(head);

	printf("Add node at Begining using PASS BY REFERENCE\n");
	add_to_begin(&head, 12);
	pr(head);

	printf("Delete First Node : ");
	head = del_first_node(head);
	pr(head);

	printf("Delete Last Node : ");
	head = del_last_node(head);
	pr(head);

	printf("Del last node using single pointer : ");
	del_last_node_single_pointer(head);
	pr(head);
	
	del_at_pos(head, 2);

	printf("----> Deleting Linked list <---- ");
	head = del(head);
	pr(head);
	if(head == NULL) 
		printf("Linked List Deleted Successfully\n");

	return 0;
}

node *add_begin(node *head, int i) {
	node *ptr = (node *)malloc(sizeof(node));
	ptr->i = i;
	ptr->next = NULL;

	ptr = head;
	head = ptr;
	return head;
}

void add_to_begin(node **head, int i) {
	node *ptr = (node *)malloc(sizeof(node));
	ptr->i = i;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
}

node *del_first_node(node *head) {
	if(head == NULL)
		printf("List is Empty\n");

	node *ptr = head->next;
	free(head);
	head = ptr;
	return head;
}

// void del_last_node(node *head) can be used & at end remove return from functon
node *del_last_node(node *head) {
	node *ptr = head; //second last ptr
	node *last_ptr = head;

	if (head == NULL)
		printf("List is empty\n");
	else if (head->next == NULL) {
		free(head);
		head = NULL;
	} else {
		while(last_ptr->next != NULL) {
			ptr = last_ptr;
			last_ptr = last_ptr->next;
		}
		ptr->next = NULL;
		free(last_ptr);
		last_ptr = NULL;
	}
	return head;
}

//delete last node using single pointer
void del_last_node_single_pointer(node *head) {
	node *ptr = head;

	while(ptr->next->next != NULL) {
		ptr = ptr->next;
	}
	free(ptr->next);
	ptr->next = NULL;
}

void del_at_pos(node *head, int pos) {
	node *ptr = head;
	node *del = head;

	pos--;
	while(pos != 1) {
		ptr = ptr->next;
		pos--;
	}
	del = ptr;
	ptr = ptr
	printf("%d \n", ptr->i);
}

node *rev(node *head) {
	node *p, *n;
	p = NULL;

	while(head != NULL) {
		n = head->next;
		head->next = p;
		p = head;
		head = n;
	}
	head = p;
	return head;
	
}

node *ins_at_pos(node *head, int i, int pos) {
	node *tmp = (node *)malloc(sizeof(node));
	node *ptr = head;
	tmp->i = i;
	tmp->next = NULL;

	pos--;
	for(int k = 0; k < pos - 1; k++) {
		ptr = ptr->next;
	}

	tmp->next = ptr->next;
	ptr->next = tmp;
	return ptr;
}

node *add_end(node *ptr, int i) {
	node *tmp = (node *)malloc(sizeof(node));
	tmp->i = i;
	tmp->next = NULL;

	ptr->next = tmp;
	ptr = tmp;
	return ptr;
}

node *del(node *head) {
	node *tmp = head;
	while (tmp != NULL) {
		tmp = head->next;
		free(head);
		head = tmp;
	}

	return tmp;
}

void pr(node *head) {
	node *ptr = head;

	while (ptr != NULL) {
		printf("%d ", ptr->i);
		ptr = ptr->next;
	}
	printf("\n");
}
