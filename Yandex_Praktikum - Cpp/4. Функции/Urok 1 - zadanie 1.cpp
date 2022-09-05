#include <iostream>
#include <string>

using namespace std;

void IsPalindrome(string s) {
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == s[s.size()-(i+1)]){
            continue;
        }
        else{
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
}

int main() {
    IsPalindrome("ara"s);
    IsPalindrome("deer"s);
}




/*
Напишите функцию IsPalindrome(string), которая проверяет, будет ли строка палиндромом. Если строка — палиндром, пусть функция печатает 1, а если нет — 0. Пустая строка считается палиндромом.

Примеры:
	Аргумент функции:	Ожидаемый результат:
		ara			1
		deer			0
	<пустая строка>			1
		V			1

Как будет тестироваться ваш код:
Тренажёр подаст в стандартный поток ввода строку. Это может быть пустая строка, строка из одного символа, строки с чётным и нечётным количеством символов. Потом тренажер сравнит то, что вывела ваша функция в поток вывода, с ожидаемым результатом.

*/