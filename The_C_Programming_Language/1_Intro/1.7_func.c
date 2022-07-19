#include <stdio.h>

int pow(int m, int n);

int main()
{
	int i;
//	i = pow(2, 3);
//	printf("%d\n", i);

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, pow(2, i), pow(-3,i));

	return 0;
}

int pow(int m, int n)
{
	int i, p;
	p = 1;

	for (i = 1; i <= n; ++i)
		p = p * m;
	
	return p;
}
