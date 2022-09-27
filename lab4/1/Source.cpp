#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	try {
		cout << hyperbola(10);
	}
	catch (int) {
		cout << "division by zero";
	}
}