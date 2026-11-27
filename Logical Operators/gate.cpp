#include "iostream"
int main()
{
	int age;
	std::cout << "Enter youre age: " << std::endl;
	std::cin >> age;

	int code;
	std::cout << "Enter youre code" << std::endl;
	std::cin >> code;

	bool hasPass = (code != 0);

	if (!hasPass) {
		std::cout << "There is an access code.";
	}
	else {
		std::cout << "No access";
	}

	std::cout << "Adult" << (age >= 18) << std::endl;

	std::cout << "Admission to the hall" << (age >= 18 && code != 0) << std::endl;

	std::cout << "Benefit" << (age <= 12 || age >= 65 ) << std::endl;

	std::cout << "Refusal" << (code == 0) << std::endl;

	std::cout << "De Morgan's coincidence" << !(age < 18 || !hasPass) << " " << ((age >= 18 && hasPass)) << std::endl;
}
