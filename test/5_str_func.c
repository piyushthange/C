#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	char str[24];
	char str2[24];
	int i;
	
	/* Ex 1 */
	sprintf(str, "Hello World");
	printf("%s\n", str);

	/* Ex 2 */
	i = 4;
	sprintf(str, "Value of i = %d", i);
	printf("%s\n", str);

	/* string length */
	int n = strlen(str);
	printf("Length of str is %d\n", n);
	
	/* String copy - strcpy */
	strcpy(str2, str);
	printf("str2 is now: %s\n", str2);	

	/* memset- fill memory with constant byte */
	memset(str, 0, 24);
	memset(str, 'a', 10);
	printf(">%s<\n", str);
	return 0;
	
}
