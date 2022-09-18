#include <iostream>

//using namespace std;
//
//// Поиск первой слева цифры
//int first_num(int num){
//    while(num / 10 > 0){
//        num /= 10;
//    }
//    return num;
//}
//
//// Поиск последней цифры
//int last_num(int num){
//    return num % 10;
//}
//
//// Функция возведения числа в степень (пригодится в будущем)
//int pow(int x, int p){
//    if (p == 1){
//        return x;
//    }
//    return x * pow(x, p - 1);
//}
//
//// Функция для подсчета количества цифр в числе
//int len_num(int num){
//    int ans = 1;
//    while(num / 10 > 0){
//        num /= 10;
//        ans++;
//    }
//    return ans;
//}
//
//// Функция, сравнивающая первую и последнюю цифры
//bool compare(int num){
//    if (first_num(num) == last_num(num)){
//        return true;
//    }
//    return false;
//}
//
///*
// Функция, для изменения числа в соответствии с условием задания
// */
//int num_edit(int num){
//    int len = len_num(num);
//
//    if (len < 2){
//        return num; // Если длина числа меньше 2, то мы ничего с числом не сделаем
//    }
//
//    int first = first_num(num);
//    int last = last_num(num);
//    int base = (num - first * pow(10, len - 1) - last) / 10; // Изначальное число без первой и последней цифр
//
//    if (compare(num)){
//        return base;
//    }
//    else{
//        return base * 10 + last * pow(10, len - 1) + first; // Число, в котором поменяли первую и последнюю цифры
//    }
//}
//
///*
//int main(){
//    int num;
//    cout << "Введите число:\n";
//    cin >> num;
//
//    if (num < 0){ // Проверка отрицательное ли число
//        cout <<"Получившееся число >> " << -1 * num_edit(num * -1);
//
//    }else{
//        cout <<"Получившееся число >> " << num_edit(num);
//    }
//}*/