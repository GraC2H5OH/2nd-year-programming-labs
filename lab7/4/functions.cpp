bool is_zero(const int* a, int length) {
	if (length == 1) return (not(a[0] == 0));
	if (a[length - 1] == 0) return false;
	return is_zero(a, length - 1);
}