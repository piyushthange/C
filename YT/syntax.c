#include <stdio.h>

int main(int argc, char *argv[])
{
	/* write out to the screen */
	printf("Hello, World form Pi\n");
	/* Data types and it's place holder */
	int i = 4;
	float j = 23.3;
	double d = 2341.1234;
	char a = 'I';
	printf("%d\n", i);
	printf("%f\n", j);
	printf("%f\n", d);
	printf("%c\n", a);
	/* read from the user */
	int k;
	printf("Enter an int: \n");
	scanf("%d", &k);
	printf("The value of k is %d\n", k);
	/* comments */
	// This is a single line comment
	/*
	 * This a multiple line comment
	 */
	/* escape sequences */
	/* \n is newline
	 * \t is for tab
	 * \b is backspace
	 */ 
	/* if-else if-else conditon */
	int x = 6, y = 4;
	if (x > y)
		printf("X is greater than Y\n");
	else if (x < y)
		printf("X is smaller than Y\n");
	else
		printf("Neither of both\n");
	/* switch () */
	/* while, do while, for */
	/* Arithmetic operations */
	/* Relational & Logical operators */
	/* type conversion */
	/* Increment and decrement operator */

	/* Arrays */
	/* Function */
	/* Pointer*/
	/* Structure*/
	/* File Operations */

	return 0;
}
