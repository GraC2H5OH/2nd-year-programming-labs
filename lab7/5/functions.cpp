bool is_zero(const int* a, int length) {
	if (length == 1) return (not(a[0] == 0));
	if (a[length - 1] == 0) return false;
	for (int i = 0; i < length; i++)
	return is_zero(a, length - 1);
}

bool where_is_zero(const double* a, int length) {
	for (int i = 0; i < length; i++) {
		if (a[i] == 0) return true;
	}
	throw 1000;
}

int zero_pos(const double* a, int length) {
	for (int i = 0; i < length; i++) {
		if (a[i] == 0) {
			if (i + 1 == length) {
				throw 100;
			}
			else return i;
		}
	}
}

double second_sum(double a) {
	if (a == 0) {
		throw 10;
	}
}

bool zero_is_first(const double* a, int length) {
	if (a[0] == 0) {
		throw 10;
		return true;
	}
	return false;
}

double ratio(const double* a, int length) {
	int pos = -1;
	int sum1 = 0;
	int sum2 = 0;
	int zero = 0;
	try {
		where_is_zero(a, length);
	}
	catch (int e) {
		cout << "There is no elements equal to zero in array";
		return -1;
	}

	try {
		pos = zero_pos(a, length);
	}
	catch (int e2) {
		cout << "Division by zero";
		return -1;
	}
	try {
		zero = zero_is_first(a, length);
	}
	catch (int e4) {
		cout << "zero elements before zero";
		return -1;
	}

	for (int i = 0; i < pos; i++) {
		sum1 += a[i];
	}
	sum1 /= pos;

	for (int j = pos + 1; j < length; j++) {
		sum2 += a[j];
	}


	sum2 /= (length - pos);

	
	try {
		second_sum(sum2);
	}
	catch (int e3) {
		cout << "Division by zero";
		return -1;
	}
	return double(sum1) / sum2;
}