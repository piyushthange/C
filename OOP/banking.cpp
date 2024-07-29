#include <iostream>
using namespace std;

class Customer {
private:
	string name;
	int acc, bal;
	static int total_customer;

public:
	Customer(string name, int acc, int bal) {
		this->name = name;
		this->acc = acc;
		this->bal = bal;
		total_customer += 1;
	}

	void display() {
		cout << "Name:  " <<  name << endl;
		cout << "Account No.: " << acc << endl;
		cout << "Balance: " <<  bal << endl;
		cout << "Total Customer: " << total_customer << endl;
		cout << "-----" << endl;
	}
};

static int Customer::total_customer=0

int main() {
	Customer("Raj", 10, 9283);
	Customer("Ram", 29, 2938489);
}
