#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	char *day[7] = {
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};

	for (i = 0; i < 7; i++)
		printf("day[%d] = %s\n", i, day[i]);
	
	return 0;
}
