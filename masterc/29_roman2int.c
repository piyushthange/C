#include <stdio.h>
#include <stdlib.h>

typedef enum {
	I = 1,
	V = 5,
	X = 10,
	L = 50,
	C = 100,
	D = 500,
	M = 1000
}roman;

int roman_int(char *s);

int main() {
	
}

int roman_int(char *s) {
	int total = 0;
	int prev = 0;
	int curr = 0;
	int len = strlen(s);
	for (int i = len - 1; i >= 0; i--) {
		switch(s[i]){
		case 'I':
			curr = I;
			break;
		case 'V':
			curr = V;
			break;

		case 'X':
			curr = X;
			break;
		case 'L':
			curr = L;
			break;
		case 'C':
			curr = C;
			break;
		case 'D':
			curr = D;
			break;
		case 'M':
			curr = M;
			break;
		}

		if (curr < prev)
			total -= curr;
		else
			total += curr;

		prev = curr;
	}

	return total;
}
