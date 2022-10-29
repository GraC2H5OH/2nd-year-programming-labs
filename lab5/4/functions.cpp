bool is_zero(double* arr1, int size) {
	for (int i = 0; i < size; i++) {
		if (arr1[i] == 0) {
			return true;
		}
	}
	return false;
}