#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
	long int *block;
	long int s;
	while(1){
		s = time(block);
		printf("%ld\n", s);
		sleep(1);
	}

	return 0;
}
