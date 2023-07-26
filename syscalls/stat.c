#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main()
{
	struct stat buff;
	struct stat *a = (struct stat *)malloc(sizeof(struct stat));
	stat("hello.txt", &buff);
	stat("open.c", a);

	int ino = buff.st_ino;
	int uid = a->st_uid;
	printf("inode : %d\n", ino);
	printf("uid : %d\n", uid);
	printf("link : %ld\n", a->st_nlink);
	return 0;
}
