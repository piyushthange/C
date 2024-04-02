#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a = 4; // int can store 4 bytes. This is signed int & default
	unsigned int b = 4; //This is unsigned int & can store 2^32 +ve integers
	short int c = 2; //short int is of 2 bytes
	long int d = 323; //long int can hold 8 bytes & of signed 
	unsigned long int e =  23847; //this'll hold 8 bytes of +ve integers
	
	char ch = 'a'; //char is of 1 byte --> 8bits
	bool bl= 0; //bool is of 1 byte
	float s = 1.28; //float is of 4 bytes
	double t = 983.9812734; // double is of 8 bytes
	// if else
	if(a < b)
		cout << a << "is less";
	else
		cout << b <<  "is less";
	// add looping

	for (int i = 0; i < 5; i++){
		cout << "print in loop" << endl;
	}

	int j = 20;
	while (j < 43) {
		cout << "Print it from 20 to 42 " << j << endl;
		j++;
	}

	// user input console input/output
	int r, x;
	cin >> r;
	cin >> x;
	cout << r + x;

	int package;
	cin >> package;
	if (package > 10) {
		cout << "Good\n";
	} else {
		cout << "Not Good\n";
	}
	
	// even odd
	int num;
	cout << "Enter Number: ";
	cin >> num;

	if (num % 2 == 0) 
		cout << "Even\n";
	else
		cout << "Odd\n";

	// else if
	if (num > 0)
		cout << "+ve number\n";
	else if (num < 0)
		cout << "-ve number\n";
	else
		cout << "Zero\n";
	
	// Loops
	for (int fd=0; fd < 3; fd++) {
		cout << "Fd" << i << endl;
	}

	//square
	for (int fs=0; fs < 6; fs++){
		cout << fs * fs << endl;
	}

	// n natural numbers

	int nn;
	cout << "Enter n to print natural number: ";
	cin >> nn;
	for (int n=0; n < nn; n++) {
		cout << n << endl;
	}
	return 0;
}
