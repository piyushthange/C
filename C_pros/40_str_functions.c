#include <stdio.h>
#include <string.h>

int main() {
	char str2[100] = "Barry";
	char str3[30] = "Brown";

	strcat(str2, str3);
	printf("%s\n", str2);
}
