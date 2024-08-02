#include <stdio.h>

union ab {
	char *a[23];
	float b;
};

int main(int argc, char *argv[]) 
{
	union ab kd;

	kd.a =  "l;asdjf";
	kd.b = 23.34;
	
	printf("%s\n", kd.a);
	
	return 0;
}
