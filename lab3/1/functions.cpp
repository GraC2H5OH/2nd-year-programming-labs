#include <iostream>

int bit_check(int num, int i) {
	num >>= i;
	return num & 1;
}