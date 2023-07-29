#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

typedef struct n {
 int a;
 int b;
}no;

int main()
{
	struct stat buff;
	struct stat *a = (struct stat *)malloc(sizeof(struct stat));
	stat("hello.txt", &buff);
	stat("open.c", a);
	no  = malloc(sizeof(no));

	int ino = buff.st_ino;
	int uid = a->st_uid;
	int *p = NULL;
	int d = 293;
	p = &d;
 
	printf("%p\n",(void *)p);
	printf("inode : %d\n", ino);
	printf("uid : %d\n", uid);
	printf("link : %ld\n", a->st_nlink);
	return 0;
}
