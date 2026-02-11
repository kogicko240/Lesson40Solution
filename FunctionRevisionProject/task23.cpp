// Задание 23: Вызовите функцию `to_upper`, которая преобразует символ 
// в верхний регистр.

#include <iostream>
#include <iomanip>
using namespace std;

double square(double x);

int main() {
    cout << fixed << setprecision(2);
    cout << square(3.5f);
    return 0;
}

double square(double x) {
    return x * x;
}