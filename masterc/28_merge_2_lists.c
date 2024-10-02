#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

int main() {
	node *head = malloc(sizeof(node));
	head->i = 1;
	head->next = NULL;

	node *ptr = head;
	ptr = add_end(ptr,2)
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
   if(list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
    struct ListNode *t;
    if(list1->val < list2->val) {
        t = list1;
        list1 = list1->next;
    } else {
        t = list2;
        list2 = list2->next;
    }

    struct ListNode *head = t;
    while(list1 != NULL && list2 != NULL){
        if(list1->val <= list2->val) {
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
