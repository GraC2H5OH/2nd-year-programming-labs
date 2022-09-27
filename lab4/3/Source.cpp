#include <iostream>
#include "Header.h"
#include <cmath>
using namespace std;

int main() {
	//chart(-2, 2, 5);
	chart(hyperbola, -2, 2, 5);
	cout << "------------------\n";
	chart(kvadrat, -2, 2, 5);
	cout << "------------------\n";
	chart(kor_kvadrat, -2, 2, 5);
	cout << "------------------\n";
	chart(sin, -2, 2, 5);
	cout << "------------------\n";
}