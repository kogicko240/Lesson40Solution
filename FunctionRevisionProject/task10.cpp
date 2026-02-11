// Задание 10: Объявите функцию `print_message`, которая принимает строку 
// и ничего не возвращает.

#include <iostream>
#include <string>
using namespace std;

// Прототип функции
void print_message(string message);

int main()
{
    print_message("Hello, C++!");
    return 0;
}

// Определение функции
void print_message(string message)
{
    cout << message;
}