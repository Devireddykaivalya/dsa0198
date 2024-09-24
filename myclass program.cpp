#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;

        MyClass() {
            x = 0;
        }
        MyClass(int val) {
            x = val;
        }
        void printX() {
            cout << "Value of x: " << x << endl;
        }
};

int main() {

    MyClass obj1;
    obj1.printX(); 
    MyClass obj2(5);
    obj2.printX(); 
    MyClass obj3(10);
    obj3.printX(); 
    return 0;
}

