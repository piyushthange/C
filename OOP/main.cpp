#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age, roll;
	string grade;
};

class Teacher{
private:
	string name;
	string dept;
	int salary;
public:
	void set_name(string n) {
		name = n;
	}

	void get_name() {
		cout << name << endl;
	}
};

int main(int argc, char *argv[])
{
	Student s1;
	s1.name = "nemo";
	s1.age = 10;
	s1.roll = 292;
	s1.grade = "A";

	cout << s1.age << endl;
	Student s2;
	Teacher t1;
	t1.set_name("Mark");
	cout << t1.get_name() << endl;

	return 0;
}
