#include <iostream>
#include <iomanip>
using namespace std;

void matrix_append(int matr[4][3], int rows, int cols, int k, int* arr1) {
	for (int i = rows; i >= k; i--) {
		for (int j = 0; j < cols; j++) {
			matr[i][j] = matr[i - 1][j];
		}
	}

	for (int g = 0; g < cols; g++) {
		matr[k][g] = arr1[g];
	}
}

void printMatrix(int matr[4][3], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			// Форматированный вывод для выравнивания столбцов
			std::cout << std::setw(std::cout.precision() * 2 + 1);
			std::cout << matr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}