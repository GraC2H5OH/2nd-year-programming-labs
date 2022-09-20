#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	int num = 0;
	int i = 0;

	cout << "Введите целое число\n";
	cin >> num;
	cout << "Введите номер бита\n";
	cin >> i;

	cout << "на позиции " << i << " стоит бит " << bit_check(num, i);
}