#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main()
{
	struct stat buff;
	struct stat a;
	stat("hello.txt", &buff);
	stat("open.c", &a);

	int ino = buff.st_ino;
	int uid = a.st_uid;
	printf("inode : %d\n", ino);
	printf("uid : %d\n", uid);
	

	return 0;
}
