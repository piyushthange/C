#include <iostream>
using namespace std;

class Student {
public:	
	string name, grade;
	int age, roll;
};

int main(int argc, char *argv[]) 
{
	Student *s = new Student;
	(*s).name = "asm";
	(*s).grade = "A+";
	(*s).age = 29;
	(*s).roll = 1234;
	
	cout << s->name << endl;
	cout << s->grade << endl;
	cout << s->age << endl;
	cout << s->roll << endl;
	
	return 0;
}
