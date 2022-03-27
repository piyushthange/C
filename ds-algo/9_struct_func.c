#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[50];
	int age;
	int roll_no;
	float marks;
};

void print(char name[], int age, int roll_no, float marks)
{
	printf("%s %d %d %f\n", name, age, roll_no, marks);
}

int main(int argc, char *argv[])
{
	struct student s1 = {"Nick", 17, 29, 89.2};
	print(s1.name, s1.age, s1.roll_no, s1.marks);
	return 0;
}
