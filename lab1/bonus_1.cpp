#include <iostream>

using namespace std;

int pow(int x, int p) {
    if (p == 1) {
        return x;
    }

    if (p == 0) {
        return 1;
    }

    return x * pow(x, p - 1);
}

int main() {
    int num;
    int one;
    int zero;

    cout << "Введите число:";
    cin >> num;

    while (num > 0) {
        if (num % 2 == 1) {
            one += 1;
        }
        else {
            zero += 1;
        }
        num /= 2;
    }
    cout << "Количество единиц >> " << one << "\n";
    cout << "Количество нулей >> " << zero;
}