#include <iostream>
#include "Header.h"
using namespace std;

int main() 
{
	int a = 0;
	int b = 0;
	cout << "Введите 2 числа \n";
	cin >> a >> b;
	cout << "НОД рекурсией = " << nod_r(a, b) << "\n";
	cout << "НОД не рекурсией = " << nod_iter(a, b);
}