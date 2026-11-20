#include "iostream"
int main()
{
	int a, b;
	std::cout << " введите два целых числа: ";
	std::cin >> a >> b;

	std::cout << " a == b: " << (a == b) << '\n';
	std::cout << " a!=b: " << (a != b) << '\n';
	std::cout << " a>b: " << (a > b) << '\n';
	std::cout << " a<b: " << (a < b) << '\n';
	std::cout << " a>=b: " << (a >= b) << '\n';
	
	return 0;
}