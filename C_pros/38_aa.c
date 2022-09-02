#include <stdio.h>

int main()
{
	int i = 0;
	int a[26];

	for (i = 0; i <= 25; i++) {
		a[i] = 'A' + i;
		printf("%d : %c\n", a[i], a[i]);
	}

	return 0;
}
