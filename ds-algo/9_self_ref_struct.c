#include <stdio.h>
#include <stdlib.h>

struct code{
	int i;
	char a;
	struct code *n;
};

int main(int argc, char *argv[])
{
	struct code var1;
	var1.i = 23;
	var1.a = 'b';
	var1.n = NULL;

	return 0;
}
