#include <iostream>
using namespace std;

int main() {
    string paragraph;
    int vowels = 0, words = 0;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    for (int i = 0; i < paragraph.length(); i++) {
        char ch = tolower(paragraph[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;

        if ((i == 0 || paragraph[i - 1] == ' ') && isalpha(ch))
            words++;
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of words: " << words << endl;

    return 0;
}

