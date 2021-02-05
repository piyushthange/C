#include <stdio.h>

const int TOTAL = 3; 
float average(int length, int array[]);

int main() 
{ 
	int scores[4];
	for (int i = 0; i < 4; i++)
		scanf("%d\n", &scores[i]);
	
	printf("Average: %f\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum = sum + array[i];
	return sum / (float) length;
}
