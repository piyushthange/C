#include <stdio.h>

int main()
{
	int a;
	a = getchar();
	while (getchar() != EOF) {
		putchar(a);
		c = getchar();
	}
}
