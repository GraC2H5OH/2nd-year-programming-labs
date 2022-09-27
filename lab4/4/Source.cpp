#include <iostream>
#include "Header.h"
using namespace std;


int main() {
	int x = 0;
	cout << "Vvedite chislo \n";
	cin >> x;

	if (x < 0) {
		x *= -1;
	}

	cout << "Chislo reverse = ";
	print_num(x);
}