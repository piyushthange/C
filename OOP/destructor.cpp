#include <iostream>
using namespace std;

class Customer {
private:
	string name;
	int *data;

public:

	Customer()
	{
		name = "ams";
		data = new int;
		*data = 10;
		cout << "Constructor is inovked\n";
	}

	~Customer()
	{
		cout << "Destructor is invoked\n";
	}
};

int main() {
	Customer a1;

	return 0;
}
