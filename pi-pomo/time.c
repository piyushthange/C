#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
	long int *block;
	long int s;
	while(1){
		s = time(block);
		printf("\rThe time is %ld", s);
		fflush(stdout);
		sleep(1);
	}

	return 0;
}
