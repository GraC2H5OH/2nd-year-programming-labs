#include <iostream>
#include <cmath>

using namespace std;

double Distance(double x_1, double y_1, double x_2, double y_2){
    double res = pow((x_2 - x_1), 2) + pow((y_2 - y_1), 2);
    return sqrt(res);
}

double Square(double x_a, double y_a, double x_b, double y_b, double x_c, double y_c){
    double res = (x_b - x_a) * (y_c - y_a) - (x_c - x_a) * (y_b - y_a);
    return 0.5 * abs(res);
}

double Distance_to_line(double x_a, double y_a, double x_1, double y_1, double x_2, double y_2){
    double numerator = abs((x_2 - x_1) * (y_1 - y_a) - (x_1 - x_a) * (y_2 - y_2));
    double divider = pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2);
    return numerator / sqrt(divider);
}

