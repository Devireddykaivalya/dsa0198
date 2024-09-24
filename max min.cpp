#include<iostream>
using namespace std;

int main() {
    int num[] = {23, 4, 456, 6, 66};
    int min = num[0];
    int max = num[0];

    for (int i = 1; i < 5; i++) {
        if (num[i] < min) min = num[i];
        if (num[i] > max) max = num[i];
    }

    cout << "The maximum number: " << max << endl;
    cout << "The minimum number: " << min<< endl;

    return 0;
}

