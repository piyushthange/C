#include <iostream>
using namespace std;

class Complex{
	int real, img;
	public:
		Complex() {
		};
		Complex(int real, int img) {
			this->real = real;
			this->img = img;
		}

		void display() {
			cout << real << " + " << img << endl;
		}

		Complex operator +(Complex &C) {
			Complex ans;
			ans.real = real + C.real;
			ans.img = img+ C.img;
		}
};

int main() {
	Complex c1(3, 4);
	Complex c2(4, 6);

	Complex c3 = c1 + c2;
	c3.display();
}
