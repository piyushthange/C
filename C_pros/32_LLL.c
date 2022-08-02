#include <stdio.h>

union lll {
	int val;
	char c[4];
};

int main(int argc, char *argv[]) {
	
	union lll a;
	a.val = 0xAABBCCDD;

	printf("addr of a : %p\n", &a);
	printf("addr of a.val : %p\n", &a.val);
	printf("addr of a.c : %p\n", &a.c);

	printf("Value at addr %p = 0x%x\n", &a.val, a.val);
	for (int i = 0; i < 4; i++)
		printf("Value at addr %p = 0x%x\n", &a.c[i], (unsigned char)(a.c[i]));
	return 0;
}
