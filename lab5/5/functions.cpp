#include <iostream>
using namespace std;

bool near(double *arr1, int size) {
	double last = arr1[0];
	for (int i = 1; i < size; i++) {
		if (last == arr1[i]) {
			return true;
		}
		last = arr1[i];
	}
	return false;

}