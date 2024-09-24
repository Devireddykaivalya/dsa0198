#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 244, 15,567,89,0};
    int min = arr[0];
	int max = arr[0];

    for (int i = 1; i < 9; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;

    return 0;
}

