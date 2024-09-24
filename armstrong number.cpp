#include <iostream>
using namespace std;

int main() {
    int number = 153;  
    int n = number;
    int result = 0;

    while (number > 0) {
        int digit = number % 10;
        result += digit * digit * digit; 
        number /= 10;
    }

    if (result == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}

