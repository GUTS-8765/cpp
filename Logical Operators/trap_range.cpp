#include "iostream"
int main()
{
	int x = 5;
	std::cout << (0 < x < 10) << std::endl;
	std::cout << (x > 0 && x < 10) << std::endl;

	x = -5;
	std::cout << (0 < x < 10) << std::endl;
	std::cout << (x > 0 && x < 10) << std::endl;

	return 0;
}
