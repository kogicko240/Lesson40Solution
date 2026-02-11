// Задание 15: Вызовите функцию `print_number_and_text`.

#include <iostream>
#include <string>
using namespace std;


void print_number_and_text(int number, string text)
{
    cout << number << ": " << text << endl;
}

int main()
{
    print_number_and_text(42, "Answer");
    return 0;
}