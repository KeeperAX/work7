#include <iostream>
using namespace std;

const int row_matrix1 = 3;
const int column_matrix1 = 3;
const int row_matrix2 = 3;
const int column_matrix2 = 3;

void multiplimtrix(int matrix1[row_matrix1][column_matrix1], int matrix2[row_matrix2][column_matrix2]) {
    //system("cls");
    cout << "��������� ������������ ������: " << endl;
    int rslt[row_matrix1][column_matrix2]; // �������������� �������
    for (int i = 0; i < row_matrix1; i++) {
        for (int j = 0; j < column_matrix2; j++) {
            rslt[i][j] = 0;

            for (int k = 0; k < column_matrix1; k++) { 
                rslt[i][j] += matrix1[i][k] * matrix2[k][j];
            }

            cout << rslt[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");
}

bool check_matrix(int column_matrix1, int row_matrix2) {
    return (column_matrix1 == row_matrix2); // �������� �� ����������� ���������
}

void addnums(int matrix1[row_matrix1][column_matrix1], int matrix2[row_matrix2][column_matrix2]) {
    cout << "�������� ������� 1: " << endl;
    for (int i = 0; i < row_matrix1; i++) {
        for (int j = 0; j < column_matrix1; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "�������� ������� 2: " << endl;
    for (int i = 0; i < row_matrix2; i++) {
        for (int j = 0; j < column_matrix2; j++) {
            cin >> matrix2[i][j];
        }
    }
}

int work71() {
    int matrix_one[row_matrix1][column_matrix1];
    int matrix_two[row_matrix2][column_matrix2];

    addnums(matrix_one, matrix_two);

    if (check_matrix(column_matrix1, row_matrix2)) {
        multiplimtrix(matrix_one, matrix_two);
    }
    else {
        cout << "������� �� ����� ���� �����������." << endl;
    }

    return 0;
}
