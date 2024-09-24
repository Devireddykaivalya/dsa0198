#include <iostream>
using namespace std;

int main() {
    float num = 9.007;      
    float* ptr = &num;   
    cout << "Value of number: " << num << endl;       
    cout << "Value using pointer: " << *ptr << endl;     

    return 0;
}

