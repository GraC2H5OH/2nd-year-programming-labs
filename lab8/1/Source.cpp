#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	int matrix[3][3];
	int user = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter the number \n";
			cin >> user;
			matrix[i][j] = user;
		}
	}
	cout << "Matrix contains " << contains_zero(matrix, 3, 3) << " rows with zeros";
}