#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}
};

int main() {
    Person person("Alice", 30);  

    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;   
    return 0;
}

