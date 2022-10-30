#include <iostream>
#include "Header.h"
#include <time.h>
using namespace std;

void read(int*& a, int& n) {
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)cin >> a[i];

}

void vivod(int* a, int n) {
	for (int i = 0; i < n; i++)cout << a[i] << " ";
}

void dublicate(int*& a, int& n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				for (int k = j; k < n; k++) {
					a[k] = a[k + 1];
				}
				n -= 1;
				int* b = new int[n];
				for (int g = 0; g < n; g++) {
					b[g] = a[g];
				}
				delete[]a;
				a = b;
			}
		}
	}
}