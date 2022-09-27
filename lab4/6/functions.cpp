#include <iostream>
using namespace std;

double power(double x, int n) {

	if (x == 0 and n < 0) {
		throw 500;
		return 0;
	}

	/*if (abs(n) == 1) {
		return x;
	}*/
	if (n > 0) {
		return x * power(x, n - 1); 
	}
	if (n < 0) {
		return 1. / x * power(x, n + 1);
	}
	else {
		return 1;
	}
}