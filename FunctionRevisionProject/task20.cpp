// Задание 20: Добавьте прототип функции, которая принимает строку и символ
// и возвращает позицию символа в строке.

#include <iostream>
#include <string>
using namespace std;

int find_char(string str, char ch);

int main() {
    cout << find_char("Hello", 'e');
    return 0;
}

int find_char(string str, char ch) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}