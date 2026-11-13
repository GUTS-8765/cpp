#include "iostream"
int main()
{
	int x = 2147483647;

	std::cout << "Was: " << x << '\n';
	std::cout << "it became: " << x + 1 << '\n';
	std::cout << "Doubled: " << x * 2 << '\n';

	return 0;
}