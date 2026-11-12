#include <iostream>
#include <string>
#include <windows.h>

int main()
{
   SetConsoleOutputCP(CP_UTF8);
   SetConsoleCP(CP_UTF8);

  std::string name;
   int birthYear;

   std::cout << "Was you, call?: ";
   std::getline(std::cin, name);

  std::cout << "You Birth?:  ";
   std::cin >> birthYear;

   std::cout << "Hello, " << name << "!" << std::endl;
   std::cout << "To you, approximately: " << (2026 - birthYear) << " Let." << std::endl;
   return 0;
}