#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	struct stat buff;

	int s;
	s = stat("myfile.txt", &buff);

	printf("inode : %d\n", buff->st_ino);
}
