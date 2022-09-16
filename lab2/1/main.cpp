#include <iostream>
#include "header.h"

using namespace std;

int main() {
    int choice;
    double x1, x2, x3, x4, x5, x6;

    cout << "Введите цифру\n"
            "1)Расстояние между точками\n"
            "2)Площадь треугольника\n"
            "3)Расстояние от точки до прямой\n";

    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Введите координаты двух точек\n";
            cin >> x1 >> x2 >> x3 >> x4;
            cout << "Расстояние между точками = " << Distance(x1, x2, x3, x4) << "\n";
            break;

        case 2:
            cout << "Введите координаты трех вершин треугольника\n";
            cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
            cout << "Площадь треугольника = " << Square(x1, x2, x3, x4, x5, x6) << "\n";
            break;

        case 3:
            cout << "Введите координаты точки, а затем координаты прямой\n";
            cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
            cout << "Расстояние от точки до прямой = " << Distance_to_line(x1, x2, x3, x4, x5, x6);
            break;
    }
}
