#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

int main(int argc, char *argv[])
{
	int num;
	printf("Enter the number of nodes you want: ");
	scanf("%d", &num);

	node *head = (struct node *)malloc(sizeof(node));
	node *c = (struct node *)malloc(sizeof(node));
	//for(int i = 0; i < num; i++){
		printf("Enter data: ");
		scanf("%d", &head->data);
		head->next = NULL;
		node *p = head;
		while(p->next == NULL){
			p = p->next;
		}
		
	//}
	printf("head->next %d\n", head->data);

	return 0;
}
