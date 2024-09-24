#include <iostream>
using namespace std;

int main() {
    char letter = 'B';     
    char* ptr = &letter;    

    cout << "Value of letter: " << letter << endl;       
    cout << "Value using pointer: " << *ptr << endl;    

    return 0;
}

