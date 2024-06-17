#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	string name;
	int age;

	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	Person() {
		cout << "person constructor\n";
	}

	~Person() {
		cout << "This is base class destructor\n";
	}
};

class Student : public Person {
	// name ,age , rollno
public:
	int rollno;
	Student() {
		cout << "Student Constructor derived Class\n";
	}
	//destructors
	~Student() {
		cout << "This is derieved class destructor\n";
	}
	// Parameterized constructor
	Student(string name, int age, int rollno): Person(name, age) {
		this->rollno = rollno;
	}
	void getInfo() {
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
		cout << "rollno: " << rollno << endl;
	}
};

int main(int argc, char *argv[])
{
	Student	s("kr", 21, 12);
	s.getInfo();
	return 0;
}
