#include <iostream>
using namespace std;

int main() {
    double distance, time;
    cout << "Distance and time: ";
    cin >> distance >> time;
    double speed = distance / time;     
    cout << "Speed: " << speed << endl;
    return 0;
}