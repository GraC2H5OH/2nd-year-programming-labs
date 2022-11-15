#include <iostream>
using namespace std;

bool symmetric(int matrix[3][3], int rows, int cols) {
	int zero_count = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				return false;
			}
		}
	}
	return true;
}