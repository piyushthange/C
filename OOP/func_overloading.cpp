#include <iostream>
using namespace std;

class Area
{
public:
	int area(int r) {
		return 3.14*r*r;
	}
	
	int area(int l, int b) {
		return l*b;
	}
};

int main() {
	Area A1;
	cout << A1.area(4) << endl;

	return 0;
}
