#include <iostream>
using namespace std;

int bin_zero(int a, int zero) {
	if (a == 0) {
		return 1;
	}
	if (a == 1) {
		return zero;
	}
	if (a % 2 == 0) {
		zero += 1;
	}
	return bin_zero(a / 2, zero);
}