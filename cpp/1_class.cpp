#include <iostream>

const double PI{3.14159};

class Cylinder {
	public:
		double r{};
		double h{};
	public:
		double vol(){
			return PI * r * h;
		}
};

int main(){
	Cylinder c1;
	c1.r = 20;
	c1.h = 40;
	std::cout << "Volume of cylinder: " << c1.vol() << std::endl;
	
	return 0;
}
