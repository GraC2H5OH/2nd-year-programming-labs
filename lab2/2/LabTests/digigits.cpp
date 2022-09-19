#include <iostream>

int digits(int n) {
	int k = 0;

	if (n < 0) {
		n *= -1;
	}

	if (n < 10) {
		return 1;
	}

	while (n > 0) {
		n /= 10;
		k++;
	}
	return k;
}