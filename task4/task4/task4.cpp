/*Даны два ненулевых числа. Найти сумму, разность, произведение и
частное их квадратов.*/
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a;
	cin >> b;
	cout << a * a + b * b << '\n';
	cout << a * a - b * b << '\n';
	cout << a * a * b * b << '\n';
	cout << a * a / b * b << '\n';
	return 0;
}
