#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	int* mas = nullptr;
	int n;
	
	read(mas, n);
	cout << "Result " << boolalpha <<func_union(mas, n, is_zero);