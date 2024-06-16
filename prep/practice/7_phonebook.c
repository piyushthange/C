#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *name[] = {"Carter", "David", "John"};
	char *num[] = {"1234", "2341", "9834"};
	char *str;
	printf("Sizeof name: %s\n", name[0]);
	scanf("%s", str);
	printf("str : %s\n", str);

	for (int i = 0; i < 3; i++) {
		if (strcmp(name[i] == str) == 0){
			printf("Found\n");	
		}
	}

	
	return 0;
}
