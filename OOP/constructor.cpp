#include <iostream>
using namespace std;

class Customer{
	string name;
	int acc;
	int bal;

public:
	//Non  parameterised constructor
	Customer() {
		name = "Abc";
		acc = 1234;
		bal = 9089;
		cout << "This is constructor\n";
	}
	
	//Parameterised constructor

	Customer(string name, int acc, int bal) {
		this->name = name;
		this->acc = acc;
		this->bal = bal;
	}

	//Inline Cosntructor

//	inline Customer(string s, int a, int b): name(s), acc(a), bal(b){	}

	// Copy Constructor

	Customer(Customer &obj) {
		name = obj.name;
		acc = obj.acc;
		bal = obj.bal;
	}

	//Display function
	void display() {
		cout << "Name: " << name  << endl;
		cout << "Account: "<< acc << endl;
		cout << "Balance: " << bal << endl;
	}
};

int main()
{
	Customer d("Consturctor", 19884, 99842);
	Customer copy_con(d);
	d.display();
	copy_con.display();

}
