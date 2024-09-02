#include <stdio.h>
#include <string.h>

void pallindrome(char *s, int len);

int main() {
	char s[] = "aabbccbbaa";
	int len = strlen(s);
	pallindrome(s, len);

}
void pallindrome(char *s, int len) {
	int mid = len / 2;
	int end = len - 1;
	int flag = 0;

	for (int i =0; i < mid; i++) {
		if(s[i] != s[end - i]) {
			flag = 1;
			break;
		}
	}

	printf("Flag : %d\n", flag);
	if (flag == 0)
		printf("Pallindrome\n");
	else if (flag == 1)
		printf("Not Pallindrome\n");
}
