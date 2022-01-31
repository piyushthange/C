#include <stdio.h>

int main(int argc, char *argv[]){
	int i;
	char c;
	long j;

	char *ptr;
	char s;

	/* Ex 1 */
	
	c = 'w';
	i = (int) c;
	printf("i = %d, %c\n", i, i);

	/* Ex 2 */
	
	s = 'x';
	ptr = &s;
	j = (long) ptr;
	printf("i = %ld\n", j);

	return 0;
}
