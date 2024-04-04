#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int i = 0;
	for (int i = 0; i < 255; i++) {
		printf("%d --> %c \n", i, i);		
	}
	printf("\n");
}
