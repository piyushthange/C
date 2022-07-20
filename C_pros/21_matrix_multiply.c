#include <stdio.h>

#define ROW 10
#define COL 10

void enterMatrix(int arr[][COL], int m, int n);
void printMatrix(int arr[][COL], int m, int n);
void MulMatrix(int a[][COL], int b[][COL], int ab[][COL], int m, int n);

int main(int argc, char *argv[])
{
	int a[ROW][COL], b[ROW][COL], ab[ROW][COL];
	int m, n;
	
	printf("Enter m and n: ");
	scanf("%d %d", &m, &n);

	printf("Enter matrix A\n");
	enterMatrix(a, m, n);

	printf("Enter matrix B\n");
	enterMatrix(b, m, n);

	printf("Entered Matrices A & B\n");
	printf("A \n");
	printMatrix(a, m, n);
	printf("\nB\n");
	printMatrix(b, m, n);

	printf("Multiplied Matrix AB\n");
	MulMatrix(a, b, ab, m, n);
	printMatrix(ab, m, n);

	return 0;
}

void enterMatrix(int arr[][COL], int m, int n) {
	int i, j;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
}

void printMatrix(int arr[][COL], int m, int n) {
	
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void MulMatrix(int a[][COL], int b[][COL], int ab[][COL], int m, int n) {
	
	int i, j, k;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			ab[i][j] = 0;
			for (k = 0; k < n; k++)
				ab[i][j] = ab[i][j] + a[i][k] * b[k][j];
		}

}
