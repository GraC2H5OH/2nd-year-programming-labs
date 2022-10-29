#include <iostream>
using namespace std;


double sum_of_elements(double* arr, int size) {
	double sum_of = 0;
	for (int i = 0; i < size; i++) {
		sum_of += arr[i];
	}
	return sum_of;
}