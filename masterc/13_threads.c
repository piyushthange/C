#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

void *routine() {
	printf("threads\n");
	sleep(3);
	printf("Threads\n");
}
int main() {
	pthread_t t, t1;
	pthread_create(&t, NULL, &routine, NULL);
	pthread_create(&t1, NULL, &routine, NULL);
	pthread_join(t, NULL);
	pthread_join(t1, NULL);
}

