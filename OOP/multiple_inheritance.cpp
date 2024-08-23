#include <iostream>
using namespace std;

class Engineer {
public:	
	string specilization;

	void work() {
		cout << "working spec: " << specilization;
	}
};

class Youtuber {
public:	
	int subscribers;

	void contentcreator() {
		cout << "Subs base " << subscribers <<endl;
	}
};

class CodeTeacher: public Engineer, public Youtuber {
public:
	string name;

	CodeTeacher(string name, string specilization, int subscribers) {
		this->name = name;
		this->specilization = specilization;
		this->subscribers = subscribers;
	}

	void showcase() {
		cout << "My name is " << name;
		work();
		contentcreator();
	}
};

int main() {
	
	CodeTeacher A1("Rk", "ssw", 9);
	A1.showcase();
}
