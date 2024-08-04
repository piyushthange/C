#include <stdio.h>
#include <stdlib.h> //const malloc calloc realloc 

int add(const int *x, const int *y) {
	
}

int main(int argc, char *argv[])
{
	int n = 50, m = 40, o = 190;
	int const a = 1;	// interger constant
	const int b = 1;	// interger constant
	
	//Pointer to integer constant: Address can be canged not the value at address
	const int *c = &a;
	int const *d = &b;
	d = &n;

	//Constant Pointer(address  is constant) to integer 
	// Value at the address can be changed but not address
	int *const e = &m;
	
	//Constant pointer to Constant integer
	// Value as well as address can't be changed
	const int *const f = &o;
	*f = 29;
	f = &m;

	// Can't change the value at the address
	const char *str = "test";
}
