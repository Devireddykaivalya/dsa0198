#include<iostream>
using namespace std;

int main() {
    int n = 1234; 
    int rev = 0, r;

    while (n > 0) {
        r = n % 10;        
        rev = rev * 10 + r; 
        n = n / 10;      
    }

    cout << "The reversed number is: " << rev << endl; 
    return 0;
}

