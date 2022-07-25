#include <stdio.h>

void leap_year(int year);

int main(int argc, char *argv[]) {
	
	int year;

	printf("Enter year : ");
	scanf("%d", &year);

	if ((year % 400) == 0)
		printf("%d is a leap year\n", year);
	else if((year % 100) == 0)
		printf("%d is not a leap year\n", year);
	else if((year % 4) == 0)
		printf("%d is a leap year\n", year);
	else
		printf("%d is not a leap year\n", year);
		
	printf("-----leap year by function-----\n");
	leap_year(year);

	return 0;
}

void leap_year(int year) {
	if ((year % 400) == 0 || (year % 4) == 0 && (year % 100) != 0)
		printf("%d is a leap year\n", year);
	else
		printf("%d is not a leap year\n", year);
}
