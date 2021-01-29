/*
* Using getchar and putchar. getchar reads from user and putchar 
  writes to the display.
*/

#include <stdio.h>

int main()
{
	int c;
	
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
