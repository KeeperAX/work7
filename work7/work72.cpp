#include <iostream>

using namespace std;

const int row = 3, col = 3;

void stepmatrix(int matrix[row][col]) {
    cout << "В какую степень вы хотите возвести матрицу?" << endl;
    int step; cin >> step;

    int rslt[row][col]; 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            rslt[i][j] = (i == j) ? 1 : 0; 
        }
    }

    for (int n = 0; n < step; n++) {
        int temp[row][col]; // Временная матрица для хранения промежуточного результата


        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                temp[i][j] = 0; 
                for (int k = 0; k < col; k++) {
                    temp[i][j] += rslt[i][k] * matrix[k][j];
                }
            }
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                rslt[i][j] = temp[i][j];
            }
        }
    }
    cout << "Результат возведения матрицы в степень: " << step << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << rslt[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");
}

void addnums(int matrix[row][col]) {
    cout << "Введите матрицу: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
}

int work72() {
    int matrix[row][col];
    addnums(matrix);
    stepmatrix(matrix);
    return 0;
}