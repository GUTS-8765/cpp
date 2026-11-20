#include "iostream"
int main()
{
	int number;
	std::cout << " Введите двузначное число: ";
	std::cin >> number;

	int tens = number / 10;
	int units = number % 10;

	std::cout << tens << " И " << units << '\n';

	return 0;
}