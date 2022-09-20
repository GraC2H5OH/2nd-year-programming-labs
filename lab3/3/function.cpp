#include <iostream>
#include <cmath>
using namespace std;

double teilor_exp(double exp_pow, double precision) {
	bool flag = false;
	if (exp_pow < 0) {
		exp_pow *= -1;
		flag = true;
	}
	

	double fake_exp = 0;
	double part = 1;
	double up_pow = exp_pow;
	int num = 1;
	int factorial = 1;
	
	

	while (part > precision) {
		fake_exp += part;
		part = up_pow / factorial;
		up_pow *= exp_pow;
		num++;
		factorial *= num;
	}
	if (flag) {
		return 1/fake_exp;
	}
	return fake_exp;
}