#include <stdio.h>

int main(int argc, char *argv[]) {
	int days, year, week, da;
	printf("Enter the no. of days: ");
	scanf("%d", &days);

	year = days / 365;
	week = (days % 365) / 7;
	da = (days % 365) % 7;

	printf("%d is equivalent to %d years, %d weeks & %d days\n", days, year, week, da);

	return 0;
}
