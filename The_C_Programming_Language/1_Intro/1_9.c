#include <stdio.h>

#define Y 1
#define N 0

int main()
{
	int c, b;

	b = N;
	while((c = getchar()) != EOF) {
		if (c != ' ')
			b = N;

		if (!b)
			putchar(c);

		if (c  == ' ')
			b = Y;
	}
	
	return 0;
}
