#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char str[20], reverse_str[20] = {'\0'};
	int len = 0, i, flag = 0;
	fflush(stdin);
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	int l = strlen(str);
	printf("len str using strlen %d\n", l);
	
	for (i = 0; str[i] != (char)10; i++)
		len++;
	for (i = len - 1; i >= 0; i--)
		reverse_str[len - i - 1] = str[i];

	for (i = 0; i < len - 1; i++) {
		if (reverse_str[i] == str[i])
			flag = 1;
		else
			flag = 0;
	}

	if (flag == 1)
		printf("%s is a Palindrome\n", str);
	else
		printf("%s is not a Palindrome\n", str);

	return 0;
}
