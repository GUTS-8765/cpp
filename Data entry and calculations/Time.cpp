#include <iostream>
using namespace std;

int main()
{
	int totalMinutes;
	
	std::cout << "How many hours & minutes in total? ";
	std::cin >> totalMinutes;

	int hours = totalMinutes / 60;
	int minutes = totalMinutes % 60;

	std::cout << " This " << hours << " H " << minutes << " Min " << endl;

	return 0;
}