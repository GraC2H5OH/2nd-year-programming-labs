#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	double arr1[5];
	double arr2[5];
	double arr3[5];
	double user = 0;
	cout << "Enter 5 elements of array \n";
	for (int i = 0; i < 5; i++) {
		cin >> user;
		arr1[i] = user;
		cin >> user;
		arr2[i] = user;
	}

	multiply(arr1, arr2, arr3, 5); task 2
	for (int i = 0; i < 5; i++) {
		cout << arr3[i] << " ";
	}