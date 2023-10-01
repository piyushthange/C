#include <iostream>

// pass by refrence

template <typename T>
const T &max(const T &a, const T &b) {
	std::cout << "temp &a : " << &a << std::endl;
	return (a > b) ? a : b;
}

int main() {
	double a {23.43};
	double b {32.34};
	std::cout << "main &a: " << &a << std::endl;
	auto res = max(a, b);

	std::cout << "main &a: " << &a << std::endl;
	return 0;
}
