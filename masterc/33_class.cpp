#include <iostream>
using namespace std;

class Student {
private:
	string name;
	int age, roll;
	string grade;
public:
	void setname(string name) {
		this->name = name;
	}

	void setage(int age) {
		this->age = age;
	}
	void setroll(int roll) {
		this->roll = roll;
	}
	void setgrade(string grade) {
		this->grade = grade;
	}
	void getname() {
		cout << name << endl;
	}
	void getage() {
		cout << age << endl;
	}
	void getroll() {
		cout << roll << endl;
	}
	void getgrade() {
		cout << grade << endl;
	}
};

class customer{
private:
	string name;
	int acc;
	int bal;
public:
	customer() {
		cout << "This is simple Constructor\n";
	}

//	customer(string name, int acc, int bal) {
//		this->name = name;
//		this->acc = acc;
//		this->bal = bal;
//		cout << "This is parameterised constructor\n";
//	}

	//inline constructor
	inline customer(string name, int acc, int bal): name(name), acc(acc), bal(bal){
		
	}

	void get_name() {
		cout << name << endl;
	}
	void get_acc() {
		cout << acc << endl;
	}
	void get_bal() {
		cout << bal << endl;
	}
};


int main() {
	Student s1;
	s1.setname("Raj");
	s1.getname();
	s1.setroll(23);
	s1.setgrade("A+");
	s1.setage(29);
	s1.getroll();

	customer c1("Piy", 23, 1000);
	 c1.get_name();
	 c1.get_acc();
	 c1.get_bal();
	


}
