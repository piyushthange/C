/*
* Experiment to find out waht happens when printf's argument string contains
  \c, where c is some character not listed above.
*/

#include <stdio.h>

int main()
{
	printf("Hello, World\c");
}
