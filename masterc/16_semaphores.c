#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t semaphore;

#define T_NUM 20;
int x = 0;
pthread_mutex_t mutex;

void *routine() {
//wait & post
	printf("Hello from thread %d\n", 

}

int main() {

	pthread_t th[T_NUM];
	sem_init(&semaphore, 0, 1);
	for (int i = 0; i < T_NUM; i++) {
		if(pthread_create(&th[i], NULL, &routine, NULL) ! = 0) {
			perror("Failed to create thread\n");
		}
	}

	for (int i = 0; i < T_NUM; i++) {
		if(pthread_join(th[i], NULL) != 0)
			perror("Failed to join\n");
	}
	sem_destroy(&semaphore);

	return 0;
}
