#include "iostream"
int main()
{
	double number = 8.35;
	int chasiki = static_cast<int>(number * 60 + 0.5);
	double pay = 2087.5;
	int kopecks = static_cast<int>(pay * 100 + 0.5);

	std::cout << kopecks / 100 << "rub" << " " << kopecks % 100 << "kop" << std::endl;
	std::cout << chasiki / 60 << "h" << " " << chasiki % 60 << "min" << std::endl;
	std::cout << "watch - " << chasiki << " " << "Bid - " << kopecks << std::endl;
}
