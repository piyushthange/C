#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


void proc_id();

int main(int argc, char *argv[]) {
	int fd = fork();
	int n;
	
	if (fd == 0) {
		n = 1;
	}
	else {
		n = 6;
	}
	if (fd != 0) {
		wait(NULL);
	}

	for (int i = n; i < n+5; i++) {
		printf("%d ", i);
		fflush(stdout);
	}

	if (fd != 0)
		printf("\n");
	
	proc_id();

	return 0;
}

void proc_id() {
	int id = fork();
	printf("Current ID: %d, Parent ID: %d\n", getpid(), getppid());
}
