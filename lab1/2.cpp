#include <iostream>
using namespace std;

int num_c(int num) {
    int num_count = 0;

    if (num == 0){
        return 1;
    }
    while (num > 0) {
        num /= 10;
        num_count++;
    }
    return num_count;
}

int sum_c(int num) {
    int sum_count = 0;

    while (num > 0) {
        sum_count += num % 10;
        num /= 10;

    }
    return sum_count;
}

/*
int main() {
    int num;
    cout << "Введите число >> ";
    cin >> num;

    if (num < 0) {
        num *= -1;
    }

    cout << "Количество цифр в указаном числе - " << num_c(num) << "\n";
    cout << "Сумма цифр в указаном числе - " << sum_c(num);
}*/