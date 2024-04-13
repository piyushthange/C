#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//print power to int
	int a, pow, num;
	printf("Enter a Number & power: ");
	scanf("%d", &a);
	scanf("%d",&pow);
	//scanf ("%d %d", &a, &pow);
	num = a;

	for (int i=1; i < pow; i++){
		num = num * a;
	}
	printf ("%d\n", num);

	return 0;
}
