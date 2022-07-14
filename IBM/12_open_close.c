#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char *argv[]) {
	int fd;
	char s[] = {"Hello, World"};

	if ((fd = open("test", O_RDWR | O_CREAT, 0700)) < 0) {
		perror("Unable to open");
		exit(EXIT_FAILURE);
	}

	write(fd, s, sizeof(s));

	read(fd, s, sizeof(s));
	close(fd);
}
