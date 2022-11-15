bool odd(int a) {
	if (a % 2 == 1) {
		return true;
	}
	return false;
}

bool even(int a) {
	if (a % 2 == 0 and a != 0) {
		return true;
	}
	return false;
}

int num_of_elements(const int* a, int length, bool (*func)(int a)) {
	if (length == 1) return func(a[0]);
	return func(a[length - 1]) + num_of_elements(a, length - 1, func);
}