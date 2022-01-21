/* To compile multiple files at once we need to run 
 * 	`gcc -o file1.c file2.c`
 * The file1.c has the main function & file2 has the function 
 * to be used in the main
 * Add the prototype of the function to the main file for
 * removing the warning.
 */

#include <stdio.h>

int add_nums(int a, int b);

int main(int argc, char *argv[]){
	int a, b, res;
	printf("Enter the number to add\n");
	scanf("%d", &a);
	scanf("%d", &b);
	res = add_nums(a, b);
	printf("The sum is %d\n", res);
	return 0;
}
