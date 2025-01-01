#include <stdio.h>

//check even/odd using & with 1 : x & 1 == 0 even : odd
void check_even_odd(int x);

// Detech 2 ints have opposite sign : x ^ y < 0
void signs_of_ints(int x, int y);

//add 1 to int : -~x;
void add_1(int x);

//swap numbers without tmp variable
void swap(int x, int y);

//Turn OFF k'th bit in a number : x & ~(1 << (k -1))
void off_bit(int x, int k);

//Turn ON k'th bit in a number : x | 1 << (k - 1)
void on_bit(int x, int k);

//Check if k'th bit is set for a number : x & (1 << (k - 1))
void check_bit(int x, int k);

//Toggle the k'th bit : x ^ (1 << (k-1))
void toggle_bit(int x, int k);

// Unset Rightmost bit of a number : x & (x-1)
void unset_rightmost_bit(int x); 

//Check if int is power of 2 without branching or loops : res = x & (x -1) : 0 ? 1
void pow_of_2(int x);

//Find position of the rightmost set bit
void rightmost_set_bit(int x);

//Alphabets in english
//Convert Uppercase to Lowercase : ch | ' ';
void up_to_low(char a);

//Convert Lowercase to Upper : ch & '_';
void low_to_up(char a);

// Invert alphabet : ch ^ ' ';
void invert_case(char a);

int main() {
	check_even_odd(6);
	signs_of_ints(-5, -8);
	add_1(2);
	swap(3, 8);
	off_bit(20, 3);
	on_bit(20, 4);
	check_bit(20, 4);
	toggle_bit(20, 3);
	unset_rightmost_bit(20);
	pow_of_2(8);
	rightmost_set_bit(20);
	up_to_low('A');
	low_to_up('z');
	invert_case('k');
}

void check_even_odd(int x) {
	if(x & 1)
		printf("%d : Odd\n", x);
	else
		printf("%d : Even\n", x);
}

void signs_of_ints(int x, int y) {
	if(x ^ y < 0)
		printf("Negative Signs\n");
	else
		printf("Both Positive\n");
}

void add_1(int x) {
	int a = -~x;
	printf("Added 1 to %d : %d\n", x, a);
}

void swap(int x, int y) {
	printf("Before Swap - x : %d , y : %d\n", x, y);
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("After Swap - x : %d , y : %d\n", x, y);
}

void off_bit(int x, int k) {
	int mask = 1 << (k - 1);
	mask = ~mask;
	int res = x & mask;
	printf("%d\n", res);
}

void on_bit(int x, int k) {
	int mask = 1 << (k - 1);
	int res = x | mask;
	printf("%d\n", res);
}

void check_bit(int x, int k) {
	int mask = 1 << (k - 1);
	if(x & mask)
		printf("Bit is SET\n");
	else
		printf("Bit is NOT SET\n");
}

void toggle_bit(int x, int k) {
	int mask = 1 << (k - 1);
	int res = x ^ mask;
	printf("%d\n", res);
}

void unset_rightmost_bit(int x) {
	int mask = x - 1;
	int res = x ^ mask;
	printf("%d\n", res);
}

void pow_of_2(int x) {
	// n & n-1 returns 0 if n is power of 2
	int mask = x - 1;
	int res = x & (x - 1);
	if(res == 0)
		printf("%d is Power of 2\n", x);
	else
		printf("%d is NOT power of 2\n", x);
	// method 2 -> x & -x == x
		
}

void rightmost_set_bit(int x) {
	//unset the rightmost bit;
	int res = x;

	int pos = 0;

	while(res) {
		res = res >> 1;
		pos++;
	}
	printf("Position of Rightmost bit for %d : %d\n", x, pos);
	
	// method 2 -> x & -x 
	printf("Alternate method for above : %d\n", x & -x);
}

void up_to_low(char a) {
	char ans = a | ' ';
	printf("%c\n", ans);
}

void low_to_up(char a) {
	char ans = a & '_';
	printf("%c\n", ans);
}

void invert_case(char a) {
	char ans = a ^ ' ';
	printf("%c\n", ans);
}
