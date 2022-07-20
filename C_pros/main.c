#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[]){
	int a = 25, b = 5;

	int ans = add(a, b);
	printf("Sum : %d\n", ans);

	ans = sub(a,b);
	printf("Subtract: %d\n", ans);

	return 0;
}


