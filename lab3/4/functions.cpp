#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>


using namespace std;

double taylor_sinus(double rad, double precision) {
	double n = 1;
	double result = 0;

	while (abs(rad) > 2 * M_PI) {
		if (rad < 0) {
			rad += 2 * M_PI;
		}
		else {
			rad -= 2 * M_PI;
		}
	}


	double part = rad;

	while (abs(part) > precision) {
		result += part;
		n += 2.;
		part = ((part * rad * rad) / ((n - 1) * n)) * -1;
	}
	return result;
}