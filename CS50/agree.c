#include <stdio.h> 
int main()
{
	char c;
	printf("Do you agree? ");
	scanf("%c", &c);

	if (c == 'y' || c == 'Y')
		printf("Agreed\n");
	else if (c == 'n' || c == 'N')
		printf("Not Agreed\n");
	else
		printf("Wrong Input");
}
