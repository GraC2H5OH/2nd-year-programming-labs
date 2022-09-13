#include <iostream>
using namespace std;

void swap_num(int &num1, int &num2) {
    if (num1 > num2) {
        num1 += num2;
        num2 = num1 - num2;
        num1 -= num2;
    }
}

void swap_num(double &num1, double &num2) {
    if (num1 > num2) {
        num1 += num2;
        num2 = num1 - num2;
        num1 -= num2;
    }
}

int main() {
    double num1, num2;
    cout << "Введите 2 числа >> \n";
    cin >> num1 >> num2;
    swap_num(num1, num2);
    cout << num1 << "\n" << num2;
}