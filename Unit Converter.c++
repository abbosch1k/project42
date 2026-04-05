#include <iostream>
using namespace std;

int main() {
    double c;
    cout << "Celsius: ";
    cin >> c;

    double f = c * 9/5 + 32;
    cout << "Fahrenheit: " << f;
}
