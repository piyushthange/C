#include <stdio.h>

int short_byte();
int main(int argc, char *argv[])
{
	
	short_byte();
	
	return 0;
}

int short_byte() {
	short s, tmp;

	s = 0;
	tmp = s - 1;
	while (s > tmp) {
		s++;
		printf("s : %d\n", s);
		tmp++;
		printf("t : %d\n", tmp);
	}

	printf("Shrot signed max value: %d\n", tmp);
}
