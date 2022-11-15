#include <iostream>
#include <iomanip>
using namespace std;

void delete_row(int matrix[3][3], int& row, int col, int k) {
	for (int i = k + 1; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix[i - 1][j] = matrix[i][j];
		}
	}
	row--;
}

void printMatrix(int matr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Форматированный вывод для выравнивания столбцов
            std::cout << std::setw(std::cout.precision() * 2 + 1);
            std::cout << matr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}