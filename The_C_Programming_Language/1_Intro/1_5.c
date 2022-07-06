#include <stdio.h>

int main() {
	float fahr, cel;

	printf("Fahrenheit\tCelsius\n");
	for (fahr = 300; fahr >= 0; fahr -= 20) {
		cel = (5.0 / 9.0) * (fahr - 32);
		printf("%3.1f\t\t%3.2f\n", fahr, cel);
	}
	
	return 0;
}
