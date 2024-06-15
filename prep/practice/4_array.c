#include <stdio.h>

//global variable
const int N = 3;
int arr(void);

int main(int arc, char *argv[])
{
	int a[] = {1,3,4,5,69,90,23};
	printf("Size of a[20]: %ld\n", sizeof(a));
	int len;
	len = sizeof(a) / sizeof(a[1]);
	printf("Length: %d\n", len);
	
	return 0;
}

int arr(void)
{
	int scores[3];

	for (int i=0; i < 3; i++) {
		scanf("%d", scores[i]);
	}
}
