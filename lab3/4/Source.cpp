#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;

int main() {
	double rad;
	double precision;


	cout << "Enter radians - \n";
	cin >> rad;
	cout << "Enter precision - \n";
	cin >> precision;
	cout << "My sinus = " << taylor_sinus(rad, precision) << "\n";
	cout << "Cmath sinus = " << sin(rad);
}