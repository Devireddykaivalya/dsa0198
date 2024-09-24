u;#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 == num2)
        cout << "The numbers are equal.\n";
    else
        cout << "The numbers are not equal.\n";

    return 0;
}

