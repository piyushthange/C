#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
	void getInfo() {
		cout << "parent class\n";
	}

	virtual void hello() {
		cout << "Hello virtual from base class\n";
	}
};

class Child: public Parent {
public:
	void getInfo() {
		cout << "child class\n";
	}
	
	void hello() {
		cout << "Hello from child class\n";
	}
};

int main(int argc, char *argv[])
{
	Parent p;
	p.getInfo();
	p.hello();
	Child c;
	c.getInfo();
	c.hello();
	return 0;
}
