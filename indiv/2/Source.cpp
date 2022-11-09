#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;

int main() {
	double eps = 0;
	double x = 0;
	cout << "Enter x \n";
	cin >> x;
	cout << "Enter eps \n";
	cin >> eps;
	cout << er(x/sqrt(2), 0.01);
}