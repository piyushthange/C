#include <stdio.h>

int main(){
	short s;
	short tmp;
	s = 0;
	tmp = s - 1;

	for (int i = 0; i < 10; i++) {
		s++;
		printf("s: %d\n", s);
		tmp++;
		printf("t: %d\n", tmp);
	}
	return 0;
}
