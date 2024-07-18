#include <iostream>
using namespace std;

class Customer {
private:
	string name;
	int acc;
	double bal = 0;
	bool isActive;
public:
	void deposit(amount) {
		bal = bal + amount;
	}

		if (isActiave == True) 
			cout << "Active Status: YES" << endl;
		else
			cout << "Active Status: NO" << endl;
	void display() {
		cout << "Name: " << name << endl;
		cout << "Account No.: " << acc << endl;
		cout << "Balance: " << bal << endl;
	}
};

int main() {
	Customer c1;	
	double amount;
	cout << "Enter the amount to deposit\n";
	cin >> amount;
	c1.deposit(amount);
}
