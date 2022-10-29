#include <iostream>
using namespace std;

void multiply(double* arr1, double* arr2, double* arr3, int size) {
	for (int i = 0; i < size; i++) {
		arr3[i] = arr1[i] * arr2[i];
	}
}