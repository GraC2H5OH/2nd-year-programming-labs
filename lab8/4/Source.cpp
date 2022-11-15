#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	int matrix[3][3];
	int user = 0;
	int k = 0;
	int rows = 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter the number \n";
			cin >> user;
			matrix[i][j] = user;
		}
	}

	cout << "Which row do u want to remove \n";
	cin >> k;

	delete_row(matrix, rows, 3, k);
	printMatrix(matrix, rows, 3);
}