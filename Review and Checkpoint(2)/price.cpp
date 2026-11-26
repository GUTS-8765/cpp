#include <iostream>

int main()
{
	double price;
	std::cout << "Enter the price: ";
	std::cin >> price;
	int kopecks = static_cast<int>(price * 100 + 0.5);
	std::cout << "Rubles: " << kopecks / 100 << std::endl;
	std::cout << "Kopecks: " << kopecks % 100 << std::endl;
	return 0;
}
