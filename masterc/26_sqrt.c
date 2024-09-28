#include <stdio.h>

int squareroot(int x);

int main() {	
	int a = squareroot(96);
	printf("%d \n", a);
}

int squareroot(int x) {
	for (int i = 1; i < x; i++) {
		if(i*i == x) {
			return i;
		} else if (i*i < x) {
			continue;
		} else if (i*i > x) {
			return --i;
		}
	}
}
