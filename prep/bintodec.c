#include <stdio.h>

int main(int argc, char *argv[])
{
	int bin, dec=0, base = 1, rem;
	printf("Enter Binary No. : ");
	scanf("%d", &bin);

	while(bin != 0) {
		rem = bin % 10;
		dec = dec + rem * base;
		bin = bin / 10;
		base = base * 2;
	}
	printf("Bin %d to Dec %d\n", bin, dec);
	
	return 0;

}
