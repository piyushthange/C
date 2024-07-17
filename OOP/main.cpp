#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int age, roll;
	string grade;
public:
	void setname(string s)
	{
		name = s;
	}

	void setage(int a)
	{
		age = a;
	}

	void setgrade(string g)
	{
		grade = g;
	}

	void setroll(int r) {
		roll = r;
	}

	void getname() {
		cout << name << endl;
	}

};

int main(int argc, char *argv[])
{
	Student s1;
	s1.setname("nemo");
	s1.setage(29);
	s1.setroll(30);
	s1.setgrade("A+");
	
	s1.getname();

	return 0;
}
