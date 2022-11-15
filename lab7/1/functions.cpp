double arr_sum(const int* a, int lenght) {
	if (lenght == 1) return a[0];
	return a[lenght - 1] + arr_sum(a, lenght - 1);
}