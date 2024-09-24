#include <iostream>
using namespace std;

int add(int a, int b) {
    return a * b;
}

int main() {

    int (*funcPtr)(int, int) = add;

    int result = funcPtr(8, 2);

    cout << "Result: " << result << endl; 

    return 0;
}

