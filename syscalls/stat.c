#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <sys/stat.h>

int main()
{
	struct stat buff;
	stat("hello.txt", &buff);

	int ino = buff.st_ino;
	printf("inode : %d\n", ino);

	return 0;
}
