#include <iostream>
using namespace std;

void print_num(int x) {
	if (x / 10 == 0) {
		cout << x % 10;
		return;
	}
	
	cout << x % 10;
	
	print_num(x / 10);
}