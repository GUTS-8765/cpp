#include <iostream>
using namespace std;

int main()
{
	int g1, g2, g3;
	int sum = g1 + g2 + g3;

	int    avgInt = sum / 3;

	double avgDouble = static_cast<double>(sum) / 3.0;

	std::cout << "Average score (as an integer): " << avgInt << endl;
	std::cout << "Average score (with a decimal fraction): " << avgDouble << endl;

	return 0;
}