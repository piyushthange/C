#include <stdio.h>

typedef struct node {
	struct node *left;
	int i;
	struct node *right;
}node;

void insert(node **root, int a) {
	node *tmp;
	
	if (*root == NULL) {
		tmp = malloc(sizeof(node));
		if (tmp == NULL) 
			exit(1);

		tmp->i = a;
		rt = tmp;
	}
}

int main(int argc, char *argv[]) {
	
	int a[14] = {19,6,85,2, 25, 90,41,23,11,7,9,82,48,32};
	int i;

	node *root = NULL;

	for (i = 0; i < 14; i++) {
		insert(&root, a[i]);
		
	}
	
	return 0;
}
