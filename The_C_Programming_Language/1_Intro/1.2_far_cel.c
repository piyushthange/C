#include <stdio.h>

/* print the fahrenheit-celsius table */

int main(){
	int lower, upper, step;
	int fahr, cel;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= 300) {
		cel = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, cel);
		fahr += step;
	}
	return 0;
}
