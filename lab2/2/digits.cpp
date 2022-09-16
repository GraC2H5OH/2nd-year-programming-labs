int digits(int n) {
	int k = 0;
	while (n > 0) {
		n /= 10;
	}
	return k;
}