#include <stdio.h>

void pr_arr(int arr[], int len);
void rev_arr(int arr[], int start, int end);
int main()
{
	int arr[] =  {1, 2, 3};
	int arr_l = sizeof(arr) / sizeof(arr[0]);
	pr_arr(arr, arr_l);
	rev_arr(arr, 0, arr_l-1);
	pr_arr(arr, arr_l);

	return 0;
}

void pr_arr(int arr[], int len)
{
	for(int i = 0; i < len; i++)
		printf("%d \n", arr[i]);
}

void rev_arr(int arr[], int start, int end)
{
	int tmp;
	while(start < end){
		tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
		start++;
		end--;
	}
}
