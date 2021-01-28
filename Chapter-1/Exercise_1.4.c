/*
* Write a program to print the corresponding Celsius to Fahrenheit table
*/

#include <stdio.h>

int main()
{
	float fahr, cel;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	cel = lower;
	printf("Celsius\t\tFahrenheit\n");
	while (cel <= upper) {
		fahr = (cel * 9/5) + 32;
		printf("%3.0f\t\t%5.2f\n", cel, fahr);
		cel = cel + 20;
	}
}
