#include "iostream"
int main()
{
	char c;
	std::cout << "Введите одну заглавную латинскую букву: ";
	std::cin >> c;

	char next = c + 1;

	std::cout << "Введенна буква: " << c << '\n';
	std::cout << "Следующая буква: " << next << '\n';

	return 0;
}