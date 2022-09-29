#include <stdio.h>
#include <string.h>

int string(char *s) {
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	return i;
}

int strl(char *s) {
	int i;
	for (i = 0; s[i] != '\0'; i++);
	return i;
}

int countUppers(char *s) {
	int i = 0;
	int uppers = 0;
	while(s[i] != '\0') {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			uppers++;
		}
		i++;
	}
	return uppers;
}
int main() {

	char str2[100] = "Baarry ";
	char s3[23] = "Brownisdf";
	char st[20] = "BwerDEwIooP";

	int i = string(str2);
	int k = strl(s3);
	printf("%d using while loop\n", i);
	printf("%d using for loop\n", k);

	int ups = countUppers(st);
	printf("%d uppers\n", ups);
	
	return 0;
}
