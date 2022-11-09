#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

double er(double x, double eps) {
	float term = x;
	float total = 0;
	int i = 0;

	while (term > eps) {
		total += term;
		i += 1;
		term = -(term * x * x * (i*2-1)) / (2 * (i * 2 + 1) * i);
	}
	return 2./sqrt(M_PI) * total;
}