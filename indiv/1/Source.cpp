#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	// variabless
	int n = 0;
	int same = 0;
	int odd = 0;
	cout << "Enter count of numbers \n";
	cin >> n;
	start(n, odd, same);
	cout << "Same digits at the start and at the end in " << same << " numbers \n";
	cout << "Max sum of odd digits in " << odd;
}