#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	double arr1[5];
	double user = 0;
	cout << "Enter 5 elements of array \n";
	for (int i = 0; i < 5; i++) {
		cin >> user;
		arr1[i] = user;
	}
	cout << "Array contains identical elements = " << boolalpha << near(arr1, 5);
}