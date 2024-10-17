#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
	int i;
	struct node *next;
}node;

typedef struct {
	node *head;
	node *tail;
	int size;
}queue;

queue *create_queue();
int size(queue *q);
bool is_empty(queue *q);
int peek(queue *q, bool *status);
void enqueue(queue *q, int val);
int dequeue(queue *q, bool *status);
void destroy_queue(queue *q);



int main() {
	queue *q = create_queue();
	if(is_empty(q))
		printf("Queue is empty\n");
	enqueue(q, 4);
	enqueue(q, 2);
	enqueue(q, 3);

	printf("Queue size: %d\n", size(q));
	bool status = false;
	int val = 0;

	val = peek(q, &status);
	if(status)
		printf("Peek Success: %d\n", val);

	val= dequeue(q, &status);
	if(status)
		printf("Deque succdes : %d\n", val);
	
	val = peek(q, &status);
	if(status)
		printf("Peek Success: %d\n", val);

	val= dequeue(q, &status);
	if(status)
		printf("Deque succdes : %d\n", val);

	val = peek(q, &status);
	if(status)
		printf("Peek Success: %d\n", val);

	val= dequeue(q, &status);
	if(status)
		printf("Deque succdes : %d\n", val);
	
	val = peek(q, &status);
	if(status)
		printf("Peek Success: %d\n", val);

	val= dequeue(q, &status);
	if(status)
		printf("Deque succdes : %d\n", val);

	
	destroy_queue(q);
}

queue *create_queue() {
	queue *a = malloc(sizeof(queue));
	a->head = NULL;
	a->tail = NULL;
	a->size = 0;

	return a;

}

int size(queue *q) {
	return q->size;
}
bool is_empty(queue *q) {
	return (q->size == 0);
}

int peek(queue *q, bool *status) {
	if(is_empty(q)) {
		*status = false;
		return NULL;
		
	}

	*status = true;
	return q->head->i;
}

void enqueue(queue *q, int val) {
	node *new = malloc(sizeof(node));
	new->i = val;
	new->next = NULL;

	if(is_empty(q)) {
		q->head = new;
		q->tail = new;
	} else {
		
		q->tail->next = new;
		q->tail = new;
	}

	q->size++;
}

int dequeue(queue *q, bool *status) {
	if(is_empty(q)) {
		*status = false;
		return NULL;
	}
	*status = true;
	int val = q->head->i;
	node *tmp = q->head;
	if(q->size == 1) {
		q->head = NULL;
		q->tail = NULL;
	} else {
		q->head = q->head->next;
	}
	free(tmp);
	q->size--;

	return val;

}
void destroy_queue(queue *q) {
	node *current = q->head;
	while (current != NULL) {
		node *tmp = current;
		current = current->next;
		free(tmp);
	}

	free(q);
}
