#include <iostream>
#include <string>
using namespace std;

class Shape {
	virtual void draw() = 0;
};

class Circle: public Shape {
public:
	void draw() {
		cout << "drawing a circle\n";
	}
}

int main(int argc, char *argv[])
{

}
