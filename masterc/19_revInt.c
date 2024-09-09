#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPali(int x);
void rev_str(char *s);
void str_palindrome(char *s);

int main()  {
	bool a;
	a = isPali(515);
	char s[] = "aabba";
	char r[] = "PIYUSH";

	if (a == 1)
		printf("Palindrome\n");
	
	str_palindrome(s);
	rev_str(r);
	printf("%s\n", r);

	return 0;
}
void str_palindrome(char *s) {
	int len = strlen(s);
	int mid = len / 2;
	int end = len - 1;
	int flag = 0;

	for (int i = 0; i < mid; i++) {
		if (s[i] != s[end - i]) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) 
		printf("Palindrome string\n");
	else
		printf("not palindrome\n");
}

void rev_str(char *s) {
	int len = strlen(s);
	int mid = len / 2;
	int end = len - 1;
	char tmp;

	for (int i = 0; i < mid; i++) {
		tmp = s[i];
		s[i] = s[end - i];
		s[end -i] = tmp;
	}
}

bool isPali(int x){
	if (x < 0)
		return false;
	
	int tmp = x;
	int rev = 0;

	while(tmp != 0) {
		int digit = tmp % 10;
		printf("%d 10 = %d\n", tmp, digit);
		rev  = rev * 10 + digit;
		tmp /= 10;
	}

	return (rev == x);
}

