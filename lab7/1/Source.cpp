#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	int* a = new int[5]{ 1,1,0,1,1 };
	cout << arr_sum(a, 5);
	delete[]a;
}