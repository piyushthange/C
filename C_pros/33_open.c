#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[]) {
	int fd;

	if ((fd = open("test.txt", O_RDWR | O_CREAT, 0770)) == -1) {
		fprintf(stderr, "failed to open");
		exit(1);
	}

	return 0;
}
