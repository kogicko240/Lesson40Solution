// Задание 12: Вызовите функцию `convert_to_float` в выражении.

#include <iostream>
using namespace std;

float convert_to_float(int num);
{
    return (float)num;
}

int main()
{
    float result = convert_to_float(10) + 5.5f;
    cout << result;
    return 0;
}

