// Задание 1: Добавьте прототип функции, которая принимает целочисленное 
// и вещественное значения и возвращает их произведение.

#include <iostream>
using namespace std;

float multiply(int a, float b);

int main()
{
    cout << multiply(5, 3.5f);
    return 0;
}

float multiply(int a, float b) {
    return a * b;
}