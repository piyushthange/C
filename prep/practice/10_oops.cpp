#include <iostream>
#include <string>
using namespace std;

class Teacher {
	//properties, attributes
private:
	double salary;
public:
	//constructor
	Teacher() {
		dept = "mech";
	}
	Teacher(string name, string dept, string subject, double salary) {
		this->name = name;
		this->dept = dept;
		this->subject = subject;
		this->salary = salary;
	}
	
	//copy constructor
	Teacher (Teacher &orgObj) {
		cout << "This is copy constructor" << endl;
		this->name = orgObj.name;
		this->dept = orgObj.dept;
		this->subject = orgObj.subject;
		this->salary = orgObj.salary;
	}

	string name;
	string dept;
	string subject;

	//methods , member functions
	void ch_dept(string newdept) {
		dept = newdept;
	}

	void SetSalary(double s) {
		salary = s;
	}

	double getSalary() {
		return salary;
	}

	void getInfo(){
		cout << "Name: " << name << endl;
		cout << "Subject: " << subject << endl;
		cout << "Dept: " << dept << endl;
	}
};

class Account {
private: //sensitive data hiding
	double balance;
	string password;

public:
	string id;
	string username;
};

class Student {
public:
	string name;
	double *cgpaptr;
	Student (string name, double cgpa) {
		this->name = name; 
		cgpaptr = new double;
		*cgpaptr = cgpa;
	}

	//destructor
	~Student() {
		cout << "Hello I'm destructor" << endl;
		delete cgpaptr; //memory leak
	}

	void getinfo() {
		cout << "name: " << name <<endl;
		cout << "cgpa: " << *cgpaptr << endl;
	}

};

int main(int argc, char *argv[])
{
	// Object creation
//	Teacher t1;

	//t1.name = "Komal";
	//t1.subject = "oop";
	//t1.SetSalary(239888);

	//cout << t1.getSalary() << endl;
	//cout << t1.dept << endl;
	//cout << t1.name << endl;

	//parametriesed constructor
	Teacher t1("kk", "cs", "cpp", 24002);
	//t1.getInfo();

	//copy constructor
	Teacher t2(t1);
	t2.getInfo();


	return 0;
}
