#include <iostream>
#include "Header.h"
using namespace std;


int main() {
	double* a = new double[5]{ 0.,1.,1.,-1.,1 };
	cout << ratio(a, 5);
	delete[]a;
}