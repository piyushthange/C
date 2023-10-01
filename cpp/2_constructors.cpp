#include <iostream>

const double PI{3.14159};

class Cylinder {
	// Member Variables
	public:
		// Constructor
		Cylinder() = default;	//default constructor
		/*
		Cylinder() {
			r = 23;
			h = 9;
		}
		*/

		Cylinder(double r_main, double h_main) {
			r = r_main;
			h = h_main;
		}


		// Funtions
		double vol(){
			return PI * r * h;
		}
	private:
		double r{};
		double h{};
};

int main(){
	Cylinder c1;
	Cylinder c2(10, 10); // 2nd constructor
	Cylinder c3;
	std::cout << "Volume of cylinder1: " << c1.vol() << std::endl;
	std::cout << "Volume of cylinder2: " << c2.vol() << std::endl;
	std::cout << "Volume of cylinder2: " << c3.vol() << std::endl;
	
	return 0;
}
