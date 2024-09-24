#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 12;
    int b = 15;

    int gcdValue = gcd(a, b); 
    int lcm = (a * b) / gcdValue; 

    cout << "LCM = " << lcm << endl;
    cout << "GCD = " << gcdValue << endl;

    return 0;
}

