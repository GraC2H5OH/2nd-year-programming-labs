#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	int* mas = nullptr;
	int n;
	int x = 0;

	cout << "enter x \n";
	cin >> x;
	read(mas, n);
	cout << "array contain x - " << boolalpha << bin_search(mas, n, x);