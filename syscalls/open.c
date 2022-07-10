#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int f;
	f = open("star", O_CREAT | O_RDWR, S_IRWXU);
	
	return 0;
}
