#include <stdio.h>

int get_positive_int(void);

int main()
{
	int  i = get_positive_int();
	printf("%d\n", i);
	
}

int get_positive_int(void)
{
	int n;
	do {
		printf("Positive Interger: ");
		scanf("%d", &n);
	} while (n < 1);
	
	return n;
}
