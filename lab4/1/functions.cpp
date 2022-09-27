#include <iostream>
using namespace std;

double hyperbola(double x) {
	if (x == 0) {
		throw 5;
	}
	else {
		return 1 / x;
	}
}