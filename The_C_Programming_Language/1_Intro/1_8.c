#include <stdio.h>

int main()
{
	int c, btn;
	btn = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ')
			++btn;
	}
	printf("%d\n", btn);
	
	return 0;
}
