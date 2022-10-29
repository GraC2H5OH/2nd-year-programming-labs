#include <iostream>
using namespace std;

int nod_r(int a, int b)
{
    if (b == 0)
        return a;
    else
        return nod_r(b, a % b);
}

int nod_iter(int a, int b)
{

    while (a != b) {
        if (a > b) {
            int t = a;
            a = b;
            b = t;
        }
        b = b - a;
    }
    return a;
}