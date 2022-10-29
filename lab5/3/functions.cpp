#include <iostream>
using namespace std;

void insert_sort(double* arr1, int size) {
	int buff = 0;
	int i, j;

	for (i = 1; i < size; i++)
	{
		buff = arr1[i];
		for (j = i - 1; j >= 0 && arr1[j] > buff; j--) {
			arr1[j + 1] = arr1[j];
		}
		arr1[j + 1] = buff;
	}
}