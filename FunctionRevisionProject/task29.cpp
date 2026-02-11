// Задание 29: Вызовите функцию `reverse_string`, которая переворачивает строку.

#include <iostream>
#include <string>
using namespace std;


string reverse_string(string str);

int main() {
    cout << reverse_string("Hello");
    return 0;
}


string reverse_string(string str) {
    string result;
    for (int i = str.length() - 1; i >= 0; i--) {
        result += str[i];
    }
    return result; 
}