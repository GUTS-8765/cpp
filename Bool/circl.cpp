#include "iostream"
using namespace std;

int main()
{
	const double PI = 3.14159;
	double r;
	
	std::cout << "Введите радиус круга: ";
	std::cin >> r;

	double arena = r * r * PI;

	std::cout << "Площадь круга: " << arena << "\n";
	
	return 0;
}