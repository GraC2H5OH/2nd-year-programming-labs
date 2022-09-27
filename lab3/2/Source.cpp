#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	int n = 0;
	int i = 0;
	int bit = 0;

	cout << "Vvedite chislo \n";
	cin >> n;
	cout << "Vvedite pos shift \n";
	cin >> i;
	cout << "Vvedite chto vstavit 1 ili 0 \n";
	cin >> bit;
	set_bit(n, i, bit);
	cout << "Mi poluchili = " << n;
}