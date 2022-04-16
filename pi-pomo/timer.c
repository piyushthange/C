#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int min, sec = 59;
	printf("Enter min: ");
	scanf("%d", &min);
	int i;

	for(i = min; i != 0;){
		--i;
		for(int j = sec; j != 0; j--){
			if(i < 10)
				printf("0");
			printf("%d:",i);
			if(j < 10)
				printf("0");
			printf("%d",j);
			fflush(stdout);
			putchar('\r');
			sleep(1);

		}
		min--;
	}

	system("./pl jaane_kya_dhoondta_hai_ye.mp3");
}
