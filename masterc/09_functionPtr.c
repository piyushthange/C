#include <stdio.h>

int add(int x, int y) {
	return x+y;
}

int sub(int x, int y) {
	return x-y;
}

int mul(int x, int y) {
	return x*y;
}

int (*select_op())(int, int) {
	int a;
	printf("1. Add\n");
	printf("2. Sub\n");
	printf("3. Mul\n");
	printf("Enter: ");
	scanf("%d", &a);

	if (a == 1) 
		return add;
	else if (a == 2)
		return sub;
	else if (a == 3)
		return mul;
	else
		return NULL;
}


int main(int argc, char *argv[]) {
	int (*func_ptr)(int, int) = &add;
	int a = func_ptr(2, 3);
	printf("%d\n", a);

	//Function pointer array
	// All function retrun type and paramerters must be of dasme data type
	int (*arr_ptr[])(int, int) = {add, sub, mul};
	int product = (*arr_ptr[2])(2,3);
	printf("%d\n", product);

	//Select operation using function pointer
	int  (*operation)(int, int) = select_op();
	printf("Answer: %d\n", operation(2, 5));

	return 0;
}
