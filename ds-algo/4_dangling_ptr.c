/* Dangling pointer is a pointer which point to a non existing location */

#include <stdio.h>

int *fun()
{
	int num = 10;
	printf("The address of num is %p", &num);
	return &num;
}

int main(int argc, char *argv[])
{
	int *ptr = NULL;
	ptr = fun();
	printf("%d\n", *ptr);
	return 0;
}
