#include <iostream>
using namespace std;

const int size = 3;

void Accept(int matrix[size][size]) {
    cout << "Enter a " << size << "x" << size << " matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }
}

void Display(int matrix[size][size]) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void Trans(int original[size][size], int result[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = original[j][i];
        }
    }
}

void add_matx(int m1[size][size], int m2[size][size], int result[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main() {
    int m1[size][size];
    int m2[size][size];
    int trans[size][size];
    int sum[size][size];

    Accept(m1);

    Display(m1);

    Trans(m1, trans);
    cout << "Trans of the first matrix:" << endl;
    Display(trans);

    Accept(m2);

    Display(m2);

    add_matx(m1, m2, sum);
    cout << "Sum of the two matrices:" << endl;
    Display(sum);

    return 0;
}
