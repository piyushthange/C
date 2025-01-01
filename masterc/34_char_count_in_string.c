#include <stdio.h>
#include <string.h>

void char_c(char *s) {
	//aaabbcccd
	int len = strlen(s);
	int c = 1;
	for(int i = 0; i < len; i++) {
		if(s[i] != s[i+1]) {
			printf("%d %c\n", c, s[i]);
			c =  1;

		}
		else if (s[i] == s[i+1])
			c++;
	}
}

void compressString(char *s);
int main() {
	char a[] = "aaabbcccd";
	char_c(a);
//	compressString(a);

}

void compressString(char *s) {
    int len = strlen(s);
    if (len == 0) return; // Handle empty string case

    char result[2 * len]; // Result can be at most twice the length of input
    int count = 1; // Initialize count for current character
    int j = 0; // Index for result array

    for (int i = 0; i < len; i++) {
        // Check if the current character is the same as the previous one
        if (i < len && s[i] == s[i - 1]) {
            count++; // Increment count if same character
        } else {
            // Append count and character to result
            j += sprintf(&result[j], "%d%c", count, s[i - 1]);
            count = 1; // Reset count for new character
        }
    }

    result[j] = '\0'; // Null-terminate the result string
    printf("Compressed string: %s\n", result); // Print the result
}
