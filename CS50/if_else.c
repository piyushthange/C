/* This is CS50 programs dir.
* I'm adding today the if else program
*/

#include <stdio.h>

int main(void)
{
	int x, y;
	printf("Enter ther value of X: ");
	scanf("%d", &x);
	printf("\nEnter ther value of Y: ");
	scanf("%d", &y);

	if (x < y) 
		printf(" X is less than Y\n");
	else if (x > y)	
		printf("X is greater than Y\n");
	else
		printf("X is equal to Y\n");
	
	return 0;
	
}
