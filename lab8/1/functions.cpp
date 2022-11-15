#include <iostream>
using namespace std;

int contains_zero(int matrix[3][3], int rows, int cols) {
	int zero_count = 0;

	for (int i = 0;i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] == 0) {
				zero_count += 1;
				break;
			}
		}
	}
	return zero_count;
}