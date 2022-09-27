#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;

double hyperbola(double x) {
	if (x == 0) {
		throw 5;
	}
	else {
		return 1 / x;
	}
}

void chart(func f, double a, double b, int n) {
	double step = (b - a) / (n - 1);
	for (double x = a; x <= b; x += step) {
		try {
			cout << "x = " << x << "\t y = " << (*f)(x) << "\n";
		}
		catch (int) {
			cout << "Values of function not defined \n";
		}
	}


}

double kvadrat(double x) {
	return x * x;
}

double kor_kvadrat(double x) {
	if (x < 0)throw 500;
	return sqrt(x);
}
