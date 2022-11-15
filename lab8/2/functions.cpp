#include <iostream>
#include <iomanip>
using namespace std;

void transpose(int matrix[3][3], int cols) 
{
    int temp;
    for (int i = 0; i < cols; ++i){
        for (int j = i; j < cols; ++j){
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
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