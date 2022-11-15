#include <iostream>
#include "Header.h"
using namespace std;


int main() {
	int* a = new int[5]{ 1,1,1,1,1 };
	cout << boolalpha <<is_zero(a, 5);
	delete[]a;
}