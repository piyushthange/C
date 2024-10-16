#include <stdio.h>
#include <sys/types.h>

union endian_un{
	int i;
	unsigned char a[4];
};

void endian_check1();
void endian_ptr();

int main() {
	endian_check1();
	endian_ptr();
}

void endian_ptr() {
	int i = 1;
	unsigned char *a = (char *)&i;

	if(*a != 0)
		printf("Arch is Little Endian\n");
	else
		printf("Arch is Big Endian\n");
}

void endian_check1() {
	union endian_un m1;
	m1.i = 0xAABBCCDD;
	printf("m1.i is : %X\n", m1.i);
	if(m1.a[0] == 0xDD)
		printf("Arch is LITTLE Endian\n");
	else
		printf("Arch is BIG Endian\n");

	for(int i = 0; i < 4; i++) {
		printf("%X ", m1.a[i]);
	}
	printf("\n");
}
