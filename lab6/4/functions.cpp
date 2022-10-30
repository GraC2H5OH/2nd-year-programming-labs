bool odd(int*& a, int& n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			return false;
		}
	}
	return true;
}

bool even(int*& a, int& n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			return false;
		}
	}
	return true;
}

bool is_zero(int*& a, int& n) {
	for (int i = 0; i < n; i++) {
		if (a[i] != 0) {
			return false;
		}
	}
	return true;
}

bool func_union(int*& a, int& n, bool (*func)(int*& a, int& n)) {

	return func(a, n);

}