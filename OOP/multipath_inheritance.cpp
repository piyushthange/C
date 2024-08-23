#include <iostream>
using namespace std;

class Human {
public:
	string name;

	void display() {
		cout << "Name : " << name << endl;
	}
};

class Engineer: public virtual Human {
public:	
	string specilization;

	void work() {
		cout << "working spec: " << specilization;
	}
};

class Youtuber: public virtual Human {
public:	
	int subscribers;

	void contentcreator() {
		cout << "Subs base " << subscribers <<endl;
	}
};

class CodeTeacher: public Engineer, public Youtuber {
public:
	int salary;

	CodeTeacher() {};

	CodeTeacher(string name, string specilization, int subscribers, int salary) {
		this->name = name;
		this->specilization = specilization;
		this->subscribers = subscribers;
		this->salary = salary;
	}
};

int main() {
	
	CodeTeacher A1("Rk", "ssw", 9, 39);
	A1.display();
	
}
