#include <iostream>
using namespace std;

int main() {
     int n=129921;
        int num=n;
        int rev=0;
        while(n!=0){
            int r=n%10;
            rev=rev*10+r;
            n/=10;
        }


    if (rev==num)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

