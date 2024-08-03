#include <iostream>
using namespace std;

class Customer {
private:
	string name;
	int acc;
	int bal;
	int add_amount;
	static int total_customer;
	static int total_bal;
public:
	Customer(string name, int acc, int bal) {
		this->name = name;
		this->acc = acc;
		this->bal = bal;
		total_customer++;
		total_bal+=bal;

	}
	
	static void accessStatic() {
		cout << "Total No. of Customers: " << total_customer << endl;
		cout << "Total Acc Bal: " << total_bal << endl;
	}

	void deposit(int amount) {
		if (amount > 0) {
			bal+=amount;
			total_bal+=amount;
		}
	}

	void withdraw(int amount) {
		if(amount <= bal && amount>0) {
			bal-=amount;
			total_bal-=amount;
		}
	}

	void display() {
		cout << "Name: " << name << endl;
		cout << "Acc no: " << acc << endl;
		cout << "Balance: " << bal << endl;
	}

	void display_total() {
		cout << "Total Customers: " << total_customer << endl;
	}
};

int Customer::total_customer=0;
int Customer::total_bal=0;

int main(){
	Customer a1("kk", 2341, 89823);
	Customer a2("kk", 2341, 89823);
	Customer a3("kk", 2341, 89823);
	a1.display();
	a1.deposit(388);

	a2.display_total();
	Customer::accessStatic();

	return 0;
}
