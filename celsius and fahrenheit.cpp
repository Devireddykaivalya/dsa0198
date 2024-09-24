#include <iostream>
using namespace std;

int main() {
    float c,f;
  
    
    cout << "Enter the value of Celsius to Fahrenheit: ";
    cin >> c;
    cout << "Enter the value of  'F' for Fahrenheit to Celsius:";
    cin >> f;
    
        cout << c << "C = " << (c * 9 / 5) + 32 << "°F\n";

        cout << f << "F = " << (f - 32) * 5 / 9 << "°C\n";

    return 0;
}

