#include <stdio.h>
#include <stdlib.h>
static int tmp = -1;

void push(int *a, int len, int i);
void pop(int *a);
void ssize();
void top(int *a);
void pr(int *a, int len);

int main() {
	int a[10] = {0};
	//push, pop, top, size of stack,
	push(a, 10, 1);
	push(a, 10, 2);
	push(a, 10, 3);
	push(a, 10, 4);
	push(a, 10, 5);
	push(a, 10, 6);
	push(a, 10, 7);
	push(a, 10, 8);
	pr(a, 10);
	pop(a);
	pr(a, 10);
	pop(a);
	pr(a, 10);
	pop(a);
	pr(a, 10);
	top(a);
	ssize();
	push(a, 10, 9);
	push(a, 10, 10);
	push(a, 10, 12);
	push(a, 10, 11);
	push(a, 10, 13);
	push(a, 10, 14);
	pr(a, 10);

	pop(a);
	pop(a);
	pop(a);
	pop(a);
	pop(a);
	pop(a);
	pop(a);
	pop(a);
	pop(a);
	pop(a);
	pop(a);
	pr(a, 10);
	top(a);
	ssize();
	return 0;
}

void push(int *a, int len, int i) {
	if(tmp == len - 1) {
		printf("The stack is full\n");
	} else {
		tmp++;
		a[tmp] = i;
	}
}

void pop(int *a) {
	if(tmp == -1) {
		printf("The stack is alread empty\n");
	} else {
		a[tmp] = 0;
		tmp--;
	}
}

void top(int *a) {
	if(tmp == -1) {
		printf("Stack Empty\n");
	} else {
		printf("Top element is : %d\n", a[tmp]);
	}
}

void ssize() {
	printf("Size of Stack is : %d\n", tmp+1);
}

void pr(int *a, int len) {
	for(int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}
