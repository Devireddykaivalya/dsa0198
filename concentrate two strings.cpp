#include <iostream>
#include <cstring> 
using namespace std;

int main() {
  
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    cout << "Concatenated string: " << str1 + str2 << endl;

    char arr1[50], arr2[50];
    cout << "Enter first char array: ";
    cin >> arr1;
    cout << "Enter second char array: ";
    cin >> arr2;
    strcat(arr1, arr2); 
    cout << "Concatenated char array: " << arr1 << endl;

    return 0;
}

