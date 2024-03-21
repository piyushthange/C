#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a = 4; // int can store 4 bytes. This is signed int & default
	unsigned int b = 4; //This is unsigned int & can store 2^32 +ve integers
	short int c = 2; //short int is of 2 bytes
	long int d = 323; //long int can hold 8 bytes & of signed 
	unsigned long int e =  23847; //this'll hold 8 bytes of +ve integers
	
	char = 'a'; //char is of 1 byte --> 8bits
	bool = 0; //bool is of 1 byte
	float = 1.28; //float is of 4 bytes
	double = 983.9812734; // double is of 8 bytes
	// if else
	if(a < b)
		cout << a << "is less";
	else
		cout << b <<  "is less";
	
	return 0;
}
