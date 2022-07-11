#include <stdio.h>

struct emp {
	int emp_id;
	char emp_name[30];
};

int main()
{
	struct emp e;
	e.emp_id = 88;
	printf("Enter Emp id: ");
	scanf("%d", &e.emp_id);
	printf("Enter Emp name: ");
	scanf("%s", e.emp_name);

	printf("The employee id: %d\n", e.emp_id);
	printf("The emp name : %s\n", e.emp_name);

	printf("Address of emp id: %p\n", &e.emp_id);
	printf("Address of emp name: %p\n", &e.emp_name);
	return 0;
}
