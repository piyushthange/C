#include <stdio.h>
#include <stdbool.h>

void leapYear(int a);

int main(int argc, char *argv[]) {
	leapYear(1900);

	return 0;
}
void leapYear(int a) {
	if ((a % 400) == 0 || (a % 4) == 0 && (a % 100) != 0)
		printf("Leap Year\n");
	else
		printf("Not Leap Year\n");
}
