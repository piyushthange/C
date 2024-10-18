#include <stdio.h>
#include <string.h>

void check_endian();  // 1. Endian Check
void leap_year(int x);	// 2. Leap year
void fibonacci(int x); // 3. Fibonacci sequence
int rec_fib(int x);   // 3.recursive fibonacci sequence
void selection_sort(int *x, int len); 	// 4.Selection Sort
void bubble_sort(int *x, int len); // 5. Bubble Sort
void pr(int *x, int len);
void bintodec(int x);		// 6. Binary to Decimal
void dectobin(int x);		// 7. Decimal to Binary
int func_ptr(int x, int y);	// 8. Function Pointer
void str_rev(char *s);		// 9. String Reverse
void int_palindrome(int x);	// 10. integer palindrome
void str_palindrome(char *s);	// 11. String Palindrome
void rev_arr(int *a, int len);	// 12. Array Reverse

int main() {
/*
	check_endian();
	leap_year(2024);
	fibonacci(10);
	for(int i = 0; i < 10; i++)
		printf("%d ",rec_fib(i));
*/
	int a[] = {2,8,1,6,4,5,9,3,0,7};
	int len = sizeof(a) / sizeof(a[0]);
// Selection Sort
	//selection_sort(a, len);
//Bubble Sort
//	pr(a, len);
//	bubble_sort(a, len);
//	pr(a, len);

//	bintodec(1111);
//	dectobin(9);

// Function Pointer

//	int (*fptr)(int, int) = &func_ptr;
//	int a = fptr(2, 3);
//	printf("Function Pointer: %d\n", a);

//String reverse
//	char s[] = "Piyush";
//	str_rev(s);

// integer palindrome
//	int_palindrome(1001);

//String palindrome
//	char s[] = "abvvb";
//	str_palindrome(s);

//Array reverse
//	rev_arr(a, len);
	
	return 0;
}

void check_endian() {
	//method 1;
	int i = 1;
	unsigned char *c = (char *)&i;

	if(*c != 0) {
		printf("Little Endian\n");
	} else {
		printf("Big Endian\n");
	}

	//method 2
	union endian {
		int i;
		unsigned char c;
	};

	union endian ab;
	ab.i = 0x01;

	if(ab.c == 0x01) {
		printf("Little Endian\n");
	} else 
		printf("Big Endian\n");
}

void leap_year(int x) {
	if(x % 400 == 0 || x % 4 == 0 && x % 100 !=0)
		printf("%d  is leap year\n", x);
	else
		printf("%d is Not a leap year\n", x);
}

void fibonacci(int x) {
	int n1 = 0;
	int n2 = 1;
	int fib = 0;
	//printf("%d %d ", n1, n2);
	if (x >= 1)
		printf("%d ", n1);
	if (x >= 2)
		printf("%d ", n2);
		
	for(int i = 3; i <= x; i++) {
		fib = n1 + n2;
		printf("%d ", fib);
		n1 = n2;
		n2 = fib;
	}
	printf("\n");
}

int rec_fib(int x) {
	if(x ==0)
		return 0;
	else if (x== 1)
		return 1;
	else 
		return rec_fib(x-1)+rec_fib(x-2);
}

void selection_sort(int *a, int len) {
	int i, j;
	for(i = 0; i < len - 1; i++) {
		int index = i;
		for(int j = i+1; j < len; j++) {
			if(a[j] < a[index]){
				index = j;
			}
		}
		printf("index : %d\n", index);
		int tmp = a[i];
		a[i] = a[index];
		a[index] = tmp;
	}

	for(int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void bubble_sort(int *x, int len) {
	for(int i = 0; i < len - 1; i++) {
		for(int j = 0; j < len - i - 1; j++) {
			if(x[j] > x[j+1]) {
				int tmp = x[j];
				x[j] = x[j+1];
				x[j+1] = tmp;
			}
				
		}
	}
}

void pr(int *x, int len) {
	for(int i=0; i < len; i++)
		printf("%d ", x[i]);
	printf("\n");
}

void bintodec(int x) {
	int rem = 0, base = 1, dec = 0;

	while(x != 0) {
		rem = x % 10;
		dec = dec + rem * base;
		x = x / 10;
		base = base * 2;
	}

	printf("%d\n", dec);
}

void dectobin(int x) {
	int rem = 0, base = 1, bin = 0;

	while(x != 0) {
		rem = x % 2;
		bin = bin + rem * base;
		x = x / 2;
		base = base * 10;
	}

	printf("%d", bin);
}

int func_ptr(int x, int y) {
	return x+y;
}

void str_rev(char *s) {
	int len = strlen(s);
	int mid = len / 2;
	int end = len - 1;
	for(int i = 0; i < mid; i++){
		char tmp = s[i];
		s[i] = s[end - i];
		s[end - i] = tmp;
	}
	printf("%s\n", s);
}

// 1001 - x / 10 +  num multi = 10 * num

void int_palindrome(int x) {
	int num = 0;
	int n = 0;
	int tmp = x;
	while(x != 0) {
		n = x % 10;
		num = num * 10 + n;
		x = x / 10;
	}
	if(num == tmp)
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");
}

void str_palindrome(char *s) {
	int len = strlen(s);
	int mid  = len / 2;
	int end = len - 1;
	int flag = 0;

	for(int i = 0; i < mid; i++) {
		if(s[i] != s[len - i - 1]){
			flag = 1;
			break;
		}
	}

	if(flag)
		printf("String is NOT a Palindrome\n");
	else
		printf("String is Palindrome\n");
}

void rev_arr(int *a, int len) {
	int mid = len / 2;
	int end = len - 1;

	for(int i = 0; i < mid; i++) {
		int tmp = a[i];
		a[i] = a[end - i];
		a[end - i] = tmp;
	}

	for(int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
