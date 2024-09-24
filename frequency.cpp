#include <iostream>
using namespace std;

int main() {
    int n[] = {2, 4, 5, 6, 7, 8, 8, 7, 7, 5, 4, 3};  
    int freq[10] = {0};  

    int size = sizeof(n) / sizeof(n[0]);  

    for (int i = 0; i < size; ++i) {
        freq[n[i]]++; 
    }

    for (int i = 0; i < 10; ++i)
        if (freq[i])
            cout << i << " occurs " << freq[i] << " times\n";

    return 0;
}

