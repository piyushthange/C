#include <iostream>

template <typename T>
T multiply(T a, T b) {
	return a * b;
}

int main() {
	double x {23.43};
	double y {32.34};
	double res = multiply(x, y);

	std::cout << "Result of Function template: " << res << std::endl;

	return 0;
}
