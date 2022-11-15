#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	int matrix[4][3];
	int user = 0;
	int arr1[3];
	int rows = 4;
	int pos = 0;


	cout << "Enter elements of matrix \n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter the number \n";
			cin >> user;
			matrix[i][j] = user;
		}
	}

	cout << "Enter elements of array \n";
	for (int k = 0; k < 3; k++) {
		cout << "Enter the number \n";
		cin >> user;
		arr1[k] = user;
	}

	cout << "Enter pos for array insertion \n";
	cin >> pos;

	matrix_append(matrix, 3, 3, pos, arr1);
	printMatrix(matrix, rows, 3);
}