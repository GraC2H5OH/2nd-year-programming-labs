#include <iostream>


// Поиск первой слева цифры
int first_num(int num) {
    while (num / 10 > 0) {
        num /= 10;
    }
    return num;
}

// Поиск последней цифры
int last_num(int num){
    return num % 10;
}

// Функция, сравнивающая первую и последнюю цифры
bool compare(int num){
    if (first_num(num) == last_num(num)){
        return true;
    }
    return false;
}