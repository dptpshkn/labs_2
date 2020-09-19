/*Даны два ненулевых числа. Найти сумму, разность, произведение и
частное их модулей.*/
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b;
    cin >> a;
    cin >> b;
    cout << abs(a) + abs(b) << '\n';
    cout << abs(a) - abs(b) << '\n';
    cout << abs(a) * abs(b) << '\n';
    cout << abs(a) / abs(b) << '\n';
    return 0;
}

