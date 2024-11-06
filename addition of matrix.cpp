#include <iostream>

using namespace std;

const int ROWS = 3; 
const int COLS = 3; 

void inputMatrix(int matrix[ROWS][COLS], const string& name) {
    cout << "Enter the elements of matrix " << name << ":\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];

    inputMatrix(matrix1, "A");
    inputMatrix(matrix2, "B");

    addMatrices(matrix1, matrix2, result);

    cout << "\nMatrix A:\n";
    printMatrix(matrix1);

    cout << "\nMatrix B:\n";
    printMatrix(matrix2);

    cout << "\nResultant Matrix (A + B):\n";
    printMatrix(result);

    return 0;
}
