#include <iostream>
using namespace std;

class Matrix {
    int mat[3][3]; // 3x3 matrix

public:
    void input() { // Input matrix
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> mat[i][j];
    }

    Matrix operator+(Matrix m) { // Overload + to add two matrices
        Matrix temp;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
        return temp;
    }

    void display() { // Display matrix
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2, result;
    m1.input();
    m2.input();
    result = m1 + m2; // Add matrices
    result.display();
    return 0;
}

