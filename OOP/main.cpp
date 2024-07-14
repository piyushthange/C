#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age, roll;
	string grade;
};

int main(int argc, char *argv[])
{
	Student s1;
	s1.name = "nemo";
	s1.age = 10;
	s1.roll = 292;
	s1.grade = "A";

	cout << s1.age << endl;


	return 0;
}
