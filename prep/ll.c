#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int i;
	struct node *next;
}node;

int main(int argc, char *argv[]) {
	node *list = NULL;

	for (int i = 1; i < argc; i++) {
		int num = atoi(argv[i]);

		// allocate node for number
		node *n = malloc(sizeof(node));
		if (n == NULL) {
			printf("Memory not allocated\n");
			return 1;
		}
		n->i = num;
		n->next = NULL;

		if (list == NULL) {
			list = n;
		} else {
			for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
				if (ptr->next == NULL){
					ptr->next = n;
					break;
				} 
			}
		}
	}
	node *ptr = list;
	while(ptr != NULL) {
		printf("%d\n", ptr->i);
		ptr = ptr->next;
	}
	
	return 0;
}
