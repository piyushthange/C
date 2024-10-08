#include <stdio.h>

void pus(int a[],int b);
void pop(int *a);
void top_ele(int *a);
void stack_size();
void pr(int *a, int len);
static int top  = -1;

int main() {
	int a[10];
	pus(a, 2);
	pus(a, 3);
	pus(a, 5);
	pus(a, 8);
	pus(a, 9);
	pr(a, 10);
	pop(a);
	pr(a, 10);
	pus(a, 11);
	pr(a, 10);
	top_ele(a);
	stack_size();

}

void pus(int a[], int b) {
	top++;
	a[top] = b;
}

void pop(int *a) {
	if(top == -1)
		printf("The array is already empty\n");
	else
	top--;
}

void stack_size() {
	printf("Size of Stack: %d\n", top+1);
}

void top_ele(int *a) {
	printf("Top : %d\n", a[top]);
}

void pr(int *a, int len) {
	for(int i = 0; i < len; i++)
		printf("%d ", a[i]);
	
	printf("\n");
	
}
