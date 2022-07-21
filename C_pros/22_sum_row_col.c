#include <stdio.h>

#define R	10
#define C	10

void prMatrix(int arr[R][C], int m, int n);
void EnterMatrix(int arr[R][C], int m, int n);
int rowSum(int arr[R][C], int k, int n);

int main(int argc, char *argv[]) {
	
	int a[R][C], m, n, rs=0;

	printf("Enter value m & n: ");
	scanf("%d %d", &m, &n);
	
	EnterMatrix(a, m, n);
	prMatrix(a, m, n);
	
	for (int i = 0; i < m; i++) {
		rs = rowSum(a, i, n);
		printf("Sum of row %d : %d\n", i+1, rs);
	}


	return 0;
}

int rowSum(int arr[R][C], int k, int n) {
	int rS = 0, i;
	
	for (i = 0; i < n; i++)
		rS = rS + arr[k][i];
	
	return rS;
}

void EnterMatrix(int arr[R][C], int m, int n) {
	int i, j;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
}

void prMatrix(int arr[R][C], int m, int n) {
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}
