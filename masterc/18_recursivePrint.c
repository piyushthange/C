#include <stdio.h>

void pr() {
	static int count = 0;
	printf("Hello, World\n");
	count++;
	if (count != 10)
		pr();
}

int main() {
	pr();

	return 0;
}
