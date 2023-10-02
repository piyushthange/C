#include <iostream>
#include "const.h"
#include "cylinder.h"

int main() {
	Cylinder c2;
	Cylinder c1(10, 10);
	std::cout << "Constructor with parms volume: " << c1.vol() << std::endl;
	std::cout << "Constructor default volume: " << c2.vol() << std::endl;
}
