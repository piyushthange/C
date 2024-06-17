#include <iostream>
#include <string>
using namespace std;

class Print {
public:	
	void show(int x) {
		cout << "int: " << x << endl;
	}

	void show(char ch) {
		cout << "char : " << ch << endl;
	}
};

class Student {
public:
	//constructor overloading Polymorphism
	string name;

	Student() {
		cout << "non-pararmeterised constructor\n";
	}

	Student(string name) {
		this->name = name;
		cout << "parameterised constructor\n";
	}
};

int main (int argc, char *argv[]) 
{
	Student s1("piyush");
	// function overloading;
	Print d;
	d.show(123);
	d.show('a');
	return 0;
}
