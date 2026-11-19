#include <iostream>
using namespace std;

int main() {
    double c;
    cout << "Celsie: ";
    cin >> c;
    double f = c * 9.0 / 5 + 32;        
    cout << "Faringate: " << f << endl;

    double f2;
    cout << "Faringate: ";
    cin >> f2;
    double c2 = (f2 - 32) * 5.0 / 9;    
    cout << "Celsie: " << c2 << endl;  
    


    int scale = 9 / 5;                  
    double broken = c * scale + 32;     
    cout << "Flawed direct formula: " << broken << endl;

    return 0;
}