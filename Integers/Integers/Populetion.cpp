#include "iostream"
int main()
{
	long long city = 0;
	long long country = 0;

	std::cout << "The city and country: ";
	std::cin >> city >> country;

	long long total = city + country;
	std::cout << "Itog: " << total << '\n';

	long long earth = 8100000000;
	std::cout << "Население Земли: " << earth << '\n';

	return 0;
}