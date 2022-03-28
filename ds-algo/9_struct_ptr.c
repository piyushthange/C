#include <stdio.h>

struct charset{
	char s;
	int i;
}

void asci(char *s, int *i)
{
	scanf("%c %d\n", s, i);
}

int main()
{
	int j;
	struct asci cs;
	asci(&cs.s, &cs.i);
	printf("%c %d", cs.s, cs.i);
	return 0;
}
