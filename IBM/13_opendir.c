#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	DIR *d;
	struct dirent *rd;

	if ((d = opendir(".")) == NULL) {
		perror("Failed to open dir");
		exit(EXIT_FAILURE);
	}

	while ((rd = readdir(d)) != NULL) {
		printf("%s\n", rd->d_name);
	}

	closedir(d);
	
	return 0;
}
