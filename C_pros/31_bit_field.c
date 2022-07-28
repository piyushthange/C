#include <stdio.h>

struct bitf {
	unsigned char f1:2,
			res1:1,
			f2:1,
			res2:1,
			f3:3;
};

int main(int argc, char *argv[]) {
	struct bitf b;
	b.f1 = 3;
	b.f2 = 0;
	b.f3 = 7;

	printf("%d %d %d\n", b.f1, b.f2, b.f3);

	return 0;
}
