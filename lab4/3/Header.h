#pragma once
typedef double(*func) (double);
void chart(double a, double b, int n);
void chart(func f, double a, double b, int n);

double hyperbola(double x);
double kvadrat(double x);
double kor_kvadrat(double x);
