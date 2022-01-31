#include <stdio.h>
#include <string.h>

int main(int argc, char *agrv[]){
	char str[20] = "hello start";
	char *ptr = "hello pointer";

	printf("str array = %s\n", str);
	printf("pointer char = %s\n", ptr);
	
	/* if we increment the ptr by 1 it'll print from the next char */
	ptr++;
	printf("pointer incremented %s\n", ptr);

	/* if we increment the str it will throw error */
	str++;
	printf("Stirng incremented %s\n", str);
	return 0;
}
