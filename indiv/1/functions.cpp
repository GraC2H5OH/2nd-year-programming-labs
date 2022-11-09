#include <iostream>
using namespace std;

int first_num(int num) {
	if (num < 0) {
		num *= -1;
	}
	while (num / 10 != 0) // while div 10 not equal to zero 
	{
		num /= 10;
	}
	return num;
}

int last_num(int num) {
	if (num < 0) {
		num *= -1;
	}
	return num % 10; // last digit of number
}

bool compare_nums(int num) {
	if (first_num(num) == last_num(num)) {
		return true; // comparing first and last digits
	}
	return false;
}

int odd_sum(int num) { // sum of odd digits in number
	int result = 0;

	if (num < 0) {
		num *= -1;
	}
	while (num > 0) {
		if (num % 2 == 1) {
			result += num % 10;
		}
		num /= 10;
	}
	return result;
}

void start(int n, int& odd, int& same) {
	int num = 0;
	int max_odd_sum = 0;

	
	for (int i = 0; i < n; i++) {
		cout << "Enter number \n";
		cin >> num;
		if (compare_nums(num)) {
			same += 1;
		}
		if (odd_sum(num) > max_odd_sum) {
			max_odd_sum = odd_sum(num);
			odd = num;
		}
	}
}