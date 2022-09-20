#include <iostream>

int bit_check(int num, int i) {
    if (num < 0){
        num *= -1;
    }

    num >>= i - 1;

    return num & 1;
}