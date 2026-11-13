// Листинг Б
#include <iostream>
int main()
{
    std::cout << "A parenthesis got lost" << std::endl;
    return 0;
    
    // Листинг В (компилируется без ошибок!)
#include <iostream>
    int main();
        std::cout << "Price: " << 375 << " rub." << std::endl;
        // по заданию должно быть: Стоимость: 375 руб.
        return 0;
    }
