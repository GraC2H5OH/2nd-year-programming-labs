#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	double x = 0;
	int n = 0;
	double result = 0;
	cout << "Vvedite chislo \n";
	cin >> x;
	cout << "Vvedite stepen \n";
	cin >> n;
	try {

		cout << "chislo " << x << " V stepeni " << n << " ravno " << power(x, n);
	}
	catch (int) {
		cout << "division by zero";
	}
}