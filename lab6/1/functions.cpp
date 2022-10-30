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

void vst_v_seredinu(int*& a, int& n, int x) {
	int* b = new int[n + 1];
	for (int i = 0; i <= n / 2; i++) {
		b[i] = a[i];

	}
	for (int i = n/2; i < n; i++) {
		b[i + 1] = a[i];

	}
	if (n % 2 == 1) {
		b[n / 2 + 1] = x;

	}
	else {
		b[n / 2] = x;
	}
	//b[n / 2] = x;
	delete[]a;
	a = b;
	n = n + 1;
}