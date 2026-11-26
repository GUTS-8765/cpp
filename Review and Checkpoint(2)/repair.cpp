#include "iostream"
int main()
{
    int goals = 27;
    double avgGoals = static_cast<double>(goals) / 8;
    std::cout << "Total goals: " << goals << std::endl;
    std::cout << "Average per match: " << avgGoals << std::endl;
    std::cout << "Balls played: " << static_cast<int>(8.9) << std::endl;
    return 0;
}
