#include <iostream>
using namespace std;

int main() {
    int n=122244455,r;

    while (n != 0) {
        int digit = n % 10;  
        r = digit;  
        cout<<r;
        n /= 10; 
    }



    return 0;
}

