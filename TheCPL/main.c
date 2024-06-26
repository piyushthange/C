#include <stdio.h>
#include <string.h>

void rev_str();
void far_cel();

int main(int arc, char *argv[])
{
	//rev_str();
	//far_cel();

	return 0;
}

void far_cel()
{
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	float far, celsius;

	for (far = lower; far <= upper; far+=step) {
		celsius = (5.0 / 9.0) * (far - 32);
		printf("%4.0f -- %3.3f\n", far, celsius);
	}
}

void rev_str() {
	int len;
	char s[] = "Hello";
	char cp[sizeof(s)];
	len = strlen(s); // 5
	printf("String s: %s\n", s);
	printf("Length s: %d\n", len);

	for(int i = 0; i < len; i++) {
		cp[i] = s[len - (i + 1)];
		printf("%c\n", cp[i]);
	}

	printf("Reversed: %s\n", cp);
}
