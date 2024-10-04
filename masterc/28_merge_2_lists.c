#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

node *add_end(node *ptr, int i);
void pr(node *head);
node *mergeTwoLists(node *list1, node *list2);
node *del_ll(node *head);

int main() {
	node *list1 = malloc(sizeof(node));
	list1->i = 1;
	list1->next = NULL;

	node *ptr = list1;
	ptr = add_end(ptr,2);
	ptr = add_end(ptr,4);
	ptr = add_end(ptr,5);
	ptr = add_end(ptr,6);
	ptr = add_end(ptr,8);
	ptr = add_end(ptr,10);

	pr(list1);

	node *list2 = (node *)malloc(sizeof(node));
	list2->i = 0;
	list2->next = NULL;

	node *ptr2 = list2;
	ptr2 = add_end(ptr2, 3);
	ptr2 = add_end(ptr2, 5);
	ptr2 = add_end(ptr2, 7);
	ptr2 = add_end(ptr2, 9);
	ptr2 = add_end(ptr2, 11);
	ptr2 = add_end(ptr2, 12);
	ptr2 = add_end(ptr2, 13);

	pr(list2);

	node *merged_list = NULL;
	merged_list = mergeTwoLists(list1, list2);

	pr(merged_list);

	list1 = del_ll(list1);
	if(list1 == NULL)
		printf("Linked list deleted Successfully\n");
	pr(list1);
}

node *add_end(node *ptr, int i) {
	node *tmp = (node *)malloc(sizeof(node));
	tmp->i = i;
	tmp->next = NULL;

	ptr->next = tmp;
	ptr = tmp;
	return ptr;
}

node *del_ll(node *head){
	node *tmp = head;
	while(tmp != NULL) {
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	head = tmp;
	return head;
}

node *mergeTwoLists(node *list1, node *list2) {
   if(list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
    node *t;
    if(list1->i < list2->i) {
        t = list1;
        list1 = list1->next;
    } else {
        t = list2;
        list2 = list2->next;
    }

    node *head = t;
    while(list1 != NULL && list2 != NULL){
        if(list1->i <= list2->i) {
            t->next = list1;
            list1 = list1->next;
        } else {
            t->next = list2;
            list2 = list2->next;
        }
        t = t->next;
    }

    if(list1 == NULL)
        t->next = list2;
    else
        t->next = list1;

    return head;
}

void pr(node *head) {
	node *ptr = head;
	while(ptr != NULL) {
		printf("%d ", ptr->i);
		ptr = ptr->next;
	}
	printf("\n");
}
