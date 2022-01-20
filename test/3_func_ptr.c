#include <stdio.h>

int add_num(int a, int b);

int main(){
	int ret;
	int (*myfunc)(int, int);
	myfunc = &add_num;
	ret = myfunc(32, 32);
	printf("The sum using function pointer is %d\n", ret);
	return 0;
}

int add_num(int a, int b){
	int sum;
	sum = a + b;
	return sum;
}
