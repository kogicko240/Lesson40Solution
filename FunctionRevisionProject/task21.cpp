// Задание 21: Объявите функцию `add_exclamation`, которая принимает строку
// и добавляет "!".

#include <iostream>
#include <string>
using namespace std;

string add_exclamation(string s);

int main() {
    string text = "Hello";
    text = add_exclamation(text);
    cout << text;
    return 0;
}

string add_exclamation(string s) {
    return s + "!"