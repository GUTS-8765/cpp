#include "iostream"
int main()
{
	int age;
	std::cout << "Enter your age and code - " << std::endl;
	std::cin >> age;
	bool hasPass = 0;

	bool outside1 = age < 18 || age <=65;

	std::cout << "Фигня переделывай - " << outside1 << std::endl;
	std::cout << "Admission to the hall - " << outside1 << std::endl;
}
