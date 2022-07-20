#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv)
{
	int id = fork();
	if (id != 0) 
		fork();
	printf("Hello, World from id %d\n", id);
	return 0;
}
