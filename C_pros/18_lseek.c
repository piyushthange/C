#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int fd;
	int ret;
	int b;
	char buff[BUFSIZ];
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	fd = open("ofile", O_CREAT | O_APPEND | O_RDWR, 0600);

	/* WIRTE  something */
	ret = write(fd, (void *)a, sizeof(a));

	/* lseek */
	ret = lseek(fd, 3*sizeof(int), SEEK_SET);

	ret = read(fd, &b, sizeof(int));

	printf("b = %d\n", b);
	close(fd);
}
