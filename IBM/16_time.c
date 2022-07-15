#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
	time_t mytime;
	struct tm *mytm;

	mytime = time(NULL);
	printf("%s\n", ctime(&mytime));

	mytime = localtime(&mytime);
}
