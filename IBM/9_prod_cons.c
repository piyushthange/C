#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#include <semaphore.h>

#define THREAD_NUM 2

int buffer[10];
int count = 0;

void *producer(void *args) {
	int x = rand() % 100;	

	/* add to buffer */
	buffer[count] = x;
	count++;
}

void *consumer(void *args) {
	int y = buffer[count - 1];
	count--;

	printf("Got %d\n", y);
}

int main(int argc, char *argv[]) {
	srand(time(NULL));
	pthread_t th[THREAD_NUM];
	int i;
	for (i = 0; i < THREAD_NUM; i++) {
		if (i % 2 == 0) {
			if (pthread_create(&th[i], NULL, &producer, NULL) != 0)
				perror("Failed to create thread");
		} else { 
			if (pthread_create(&th[i], NULL, &consumer, NULL) != 0)
				perror("Failed to create Thread");
		}
	}
	for (i = 0; i < THREAD_NUM; i++) {
		if (pthread_join(th[i], NULL) != 0)
			perror("FAiled to join thread");
	}

	return 0;
}
