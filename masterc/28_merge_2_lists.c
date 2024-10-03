#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

node *add_end(node *ptr, int i);
void pr(node *head);
node *mergeTwoLists(node *list1, node *list2);

int main() {
	node *head = malloc(sizeof(node));
	head->i = 1;
	head->next = NULL;

	node *ptr = head;
	ptr = add_end(ptr,2);
	ptr = add_end(ptr,4);
	ptr = add_end(ptr,6);
	ptr = add_end(ptr,8);

	pr(head);
}

node *add_end(node *ptr, int i) {
	node *tmp = (node *)malloc(sizeof(node));
	tmp->i = i;
	tmp->next = NULL;

	ptr->next = tmp;
	ptr = tmp;
	return ptr;
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
