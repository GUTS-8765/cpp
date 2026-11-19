#include "iostream"
int main()
{
	int minutes = 0;
	int price = 0;
	int tickets = 0;
	int paid = 0;

	std::cout << "Minutes, price, tickets, entered: ";
	std::cin >> minutes >> price >> tickets >> paid;

	int hours = minutes / 60;        
	int mins = minutes % 60;

	int order = price * tickets;
	int change = paid - order;

	std::cout << "session: " << hours << " h " << mins << " min" << std::endl;
	std::cout << "Payment: " << order << std::endl;
	std::cout << "Change: " << change << std::endl;
	std::cout << "Change " << change << ". Thank you!" << std::endl;

	return 0;
}