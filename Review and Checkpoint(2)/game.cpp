#include "iostream"
int main()
{
	std::string name;
	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;
	int score;
	std::cout << "Enter score: " << std::endl;
	std::cin >> score;
	double hours;
	std::cout << "Enter house: " << std::endl;
	std::cin >> hours;
	std::cout << "Players - " << name << std::endl;
	std::cout << "Glasses - " << score << std::endl;
	std::cout << "Level - " << score << std::endl;

	double progress = score % 1000 / 1000.0 * 100 + 0.5;
	std::cout << "Progress ro the level of 3: " << progress << std::endl;
	long long mili = hours * 3600 * 1000;
	std::cout << "Milliseconds in-game: " << mili << std::endl;
	char a = 'D';

	std::cout << "Rank: " << static_cast<char>(a - 2) << '\n';
	const int max = 2000;
	std::cout << "The record has been broken - " << (score > max) << std::endl;

	return 0;
}
