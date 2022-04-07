#include <stdio.h>
#include <stdlib.h>

int stack[25];
int count = 0;

void push(int x)
{
	stack[count] = x;
	count++;
}

int pop()
{
	int res = stack[count - 1];
	count--;
	return res;
}

int main(int argc, char *argv[])
{
	push(1);
	push(2);
	push(3);

	int i;
	for(i = 0; i< 3; i++)
		printf("%d\n", stack[i]);

	for(i = 0; i < 3; i++)
		printf("%d ", pop());
}
