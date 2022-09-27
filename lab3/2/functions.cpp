#include <iostream>
using namespace std;

bool check_bit(int n, int i) {
	int mask = 1 << (i - 1);
	return (n & mask);
};

void set_bit(int& n, int i, bool value){
	if (check_bit(n, i) != value)
		n ^= (1 << (i - 1));
}