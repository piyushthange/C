#include <stdio.h>

/* Print Celsius to Fahrenheit table from 0 to 300 */

int main() {
	float fahr, cel;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	cel = lower;

	while (cel <= upper) {
		fahr = (9.0 / 5.0) * cel + 32;
		printf("%f\t\t%3.2f\n", cel, fahr);
		cel += step;
	}
	return 0;
}
