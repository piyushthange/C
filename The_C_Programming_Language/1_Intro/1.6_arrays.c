#include <stdio.h>

int main()
{
	int c, i, nw, no;
	int ndig[10];

	nw = no = 0;
	for (i = 0; i < 10; i++)
		ndig[i] = 0;
	
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndig[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nw;
		else
			++no;

	printf("digits = ");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndig[i]);
	printf(", white space = %d, other = %d\n", nw, no);

	return 0;
}
